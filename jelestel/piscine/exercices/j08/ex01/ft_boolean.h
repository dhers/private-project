/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/14 14:08:21 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/14 14:52:28 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_BOOLEAN_H

# define	FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "I have a pair number of arguments.\n"
# define ODD_MSG "I have an impair number of arguments.\n"
# define TRUE 1
# define FALSE 0
# define EVEN(x) (x + 1) % 2
# define SUCCESS 0
typedef int	t_bool;

#endif
