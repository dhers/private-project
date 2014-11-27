#include "../includes/bsq.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

static int			init_tab(void)
{

	if ((GTAB = (char *)malloc(sizeof(char) * (SIZEX * SIZEY))) == NULL)
		return (0);
	return (1);
}

int					fill_tab(char *line)
{
	static int		i = 0;
	int				j;
	char			*tab;

	if ((int)ft_strlen(line) != SIZEX)
		return (0);
	if (!i && !init_tab())
		return (0);
	tab = GTAB;
	j = 0;
	while (j < SIZEX)
	{
		if (line[j] == get_env()->symb[0])
			tab[i] = '.';
		else if (line[j] == get_env()->symb[1])
			tab[i] = 'o';
		else if (line[j] != get_env()->symb[1])
			return (0);
		++j;
		++i;
	}
	return (1);
}

int					ft_dup_tab(void)
{
	GTABDUP = GTAB;
	if (!GTABDUP)
		return (0);
	return (1);
}
