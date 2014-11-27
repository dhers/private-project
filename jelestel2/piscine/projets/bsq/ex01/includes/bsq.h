#ifndef BSQ_H
# define BSQ_H

# define SIZEX get_env()->sizex
# define BINX ((SIZEX / 8) + 1)
# define SIZEY get_env()->sizey
# define TAB(x, y) get_env()->tab[x + (y * BINX)]
# define GTAB get_env()->tab

# define TOGGLEB(x, n) (x ^ (x << n))
# define GBIT(c, i) ((c & (1 << i)) ? '1' : '0')

typedef unsigned char 	t_bit;
typedef struct			s_env
{
	int					sizex;
	int					sizey;
	char				symb[3];
	t_bit				*tab;
}						t_env;

t_env					*get_env(void);
int						parse(int fd);
int						parse_line(char *line, int fd);
int						fill_tab(char *line);

#endif
