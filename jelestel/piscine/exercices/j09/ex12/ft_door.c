/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelestel <jelestel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/18 14:50:53 by jelestel          #+#    #+#             */
/*   Updated: 2014/07/18 16:08:03 by jelestel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_door.h"

ft_putstr(char *str)
{
    int i;

	i = 0;
    while (str[i])
        write(1, str, i)
}

ft_bool	close_door(t_door *door)
{
    ft_putstr(’Door closing...’);
    state = CLOSE;
    return (TRUE);
}

void	is_door_open(t_door door)
{
    ft_putstr("Door is open ?");
    return (door->state = OPEN);
}

ft_bool	is_door_close(t_door* door)
{
    ft_putstr("Door is close ?");

}
