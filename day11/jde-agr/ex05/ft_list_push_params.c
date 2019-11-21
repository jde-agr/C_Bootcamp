/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 12:33:07 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/24 14:42:03 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list		*list;
	t_list		*tmp;
	int			i;

	list = NULL;
	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			tmp = ft_create_elem(av[i]);
			tmp->next = list;
			list = tmp;
			i++;
		}
	}
	return (list);
}
