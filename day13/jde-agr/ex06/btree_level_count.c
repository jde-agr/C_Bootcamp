/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 11:55:44 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/27 12:01:14 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	ft_max_val(int left, int right)
{
	if (left > right)
		return (left);
	else
		return (right);
}

int	btree_level_count(t_btree *root)
{
	if (!root)
		return (0);
	return (ft_max_val(btree_level_count(root->left),
				btree_level_count(root->right)) + 1);
}
