/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 14:03:25 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/18 14:19:09 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef 	FT_PERSO_H
# define	FT_PERSO_H

# include <string.h>

typedef struct s_perso	t_perso;
# define SAVE_AUSTIN_POWER "Q"

struct					s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
};

#endif
