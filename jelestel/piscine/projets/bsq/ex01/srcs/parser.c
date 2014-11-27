#include "../includes/bsq.h"
#include "../libft/includes/libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	parse_arg(char *line)
{
	int		l;

	if ((l = ft_strlen(line)) >= 4)
	{
		if (!ft_isprint(line[l - 1]) || !ft_isprint(line[l - 2])
			|| !ft_isprint(line[l - 3]))
			return (0);
		if (((line[l - 1] == line[l - 2]) || (line[l - 1] == line[l - 3]) ||
			 (line[l - 2] == line[l - 3])))
			return (0);
		get_env()->symb[2] = line[l - 1];
		get_env()->symb[1] = line[l - 2];
		get_env()->symb[0] = line[l - 3];
		ft_bzero(line + l - 3, 3);
		if ((get_env()->sizey = ft_atoi(line)) <= 0)
			return (0);
		return (1);
	}
	return (0);
}

int		parse_line(char *line, int fd)
{
	int		i;

	line = NULL;
	i = 0;
	while (get_next_line(fd, &line) > 0)
	{
		if (i == 0)
			SIZEX = ft_strlen(line);
		if (!fill_tab(line))
			return (0);
		free(line);
		++i;
	}
	return (1);
	if (line)
		free(line);
	return (0);
}

int		parse(int fd)
{
	char		*line;
	int			ret;

	line = NULL;
	printf("%i\n", fd);
	if ((ret = get_next_line(fd, &line)) && parse_arg(line))
	{
		if (ret < 1)
			 exit(2);
		free(line);
		return (parse_line(line, fd));
	}
	printf("%i\n", fd);
	if (line)
		free(line);
	return (0);
}
