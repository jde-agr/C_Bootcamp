/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 17:20:43 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/19 11:44:21 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *nbs;

	i = 0;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	nbs = (int*)malloc(sizeof(*nbs) * ((max - min) + 1));
	while (i < (max - min))
	{
		nbs[i] = min + i;
		i++;
	}
	nbs[i] = '\0';
	*range = nbs;
	return (i);
}
