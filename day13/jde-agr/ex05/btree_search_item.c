/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 11:44:06 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/27 11:50:01 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (!(root))
		return (0);
	btree_search_item(root->left, data_ref, cmpf);
	if ((*cmpf)((*root).item, data_ref) == 0)
		return (root->item);
	btree_search_item(root->right, data_ref, cmpf);
	return (0);
}
