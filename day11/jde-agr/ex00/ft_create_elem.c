/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 10:31:08 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/24 11:05:24 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *head;

	head = (t_list*)malloc(sizeof(t_list));
	if (head)
	{
		head->data = data;
		head->next = NULL;
	}
	return (head);
}
