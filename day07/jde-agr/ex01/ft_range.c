/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 15:12:34 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/18 17:53:49 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *nbs;
	int i;

	nbs = (int*)malloc(sizeof(*nbs) * ((max - min) + 1));
	if (min >= max)
		return (NULL);
	i = 0;
	while (min < max)
	{
		nbs[i] = min;
		i++;
		min++;
	}
	nbs[i] = '\0';
	return (nbs);
}
