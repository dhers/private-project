#include <stdlib.h>
#include "../includes/bsq.h"
#include <string.h>

t_env		*get_env(void)
{
  static t_env	*env = NULL;

  if (!env)
	  env = (t_env*)malloc(sizeof(t_env));
  return (env);
}

void		init_env(void)
{
	SIZEX = 0;
	SIZEY = 0;
}
