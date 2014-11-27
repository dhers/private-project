/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfanton <gfanton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/28 01:00:39 by gfanton           #+#    #+#             */
/*   Updated: 2013/12/29 22:53:42 by gfanton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstcmp(t_list *root, void *content, int (*cmpf)(void*, void*))
{
	if (!root)
		return (NULL);
	else if ((*cmpf)(root->content, content) == 0)
		return (root->content);
	else
		return (ft_lstcmp(root->next, content, cmpf));
}
