#include "../includes/bsq.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>
#include <stdio.h>

static int			init_tab(void)
{
	//int				i;

	if ((GTAB = (t_bit*)malloc(sizeof(char) * (BINX * SIZEY))) == NULL)
		return (0);
	ft_memset(GTAB, 255, sizeof(char) * (BINX * SIZEY));
	/*i = 0;
	while (i < (BINX * SIZEY))
	{
		GTAB[i] = 255;
		++i;
	}*/
	return (1);
}

int					fill_tab(char *line)
{
	static int		i = 0;
	int				j;
	int				nbit;
	t_bit			*tab;

	(void)tab;
	if ((int)ft_strlen(line) != SIZEX)
		return (0);
	if (!i && !init_tab())
		return (0);
	tab = GTAB;
	j = 0;
	nbit = 0;
	while (j < SIZEX)
	{
		if (line[j] == get_env()->symb[0])
			tab[i] ^= (128 >> (nbit));
		else if (line[j] != get_env()->symb[1])
			return (0);
		++j;
		nbit = (j % 8);
		if (j != 0 && nbit == 0)
		{
			//printf("[%d:", nbit);
			//printf("%3d]", tab[i]);
			++i;
		}
	}
	//printf("[%d:", nbit);
	//printf("%3d]", tab[i]);
	++i;
	//printf("\n");
	return (1);
}

/* int				or_line(void) */
/* { */
/* 	static int	y = 0; */
/* 	int			x; */



/* } */
