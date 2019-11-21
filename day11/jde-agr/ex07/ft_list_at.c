/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 14:56:45 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/24 15:47:42 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*list;
	unsigned int	i;

	if (begin_list == NULL)
		return (NULL);
	i = 0;
	list = begin_list;
	while (i < nbr)
	{
		if (!list->next)
			return (NULL);
		list = list->next;
		i++;
	}
	return (list);
}
