/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 12:05:22 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/27 13:05:02 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_by_level(t_btree *root,
		void (*applyf)(void *item, int current_level, int is_first))
{
	if (root)
	{
		if (current_level == is_first)
			(*applyf)(root->item, current_level, is_first);
		btree_apply_by_level(root->left, applyf);
		btree_apply_by_level(root->right, applyf);
	}
}
