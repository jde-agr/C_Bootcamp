/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 16:02:49 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/20 00:36:37 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour < 12 || hour == 24)
	{
		if (hour != 0)
			hour = hour % 12;
		if (hour == 0)
			hour = 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i.00 A.M. ", hour);
		if (hour == 12)
			hour = 0;
		if (hour != 11)
			printf("AND %i.00 A.M.\n", hour + 1);
		else
			printf("AND %i.00 P.M.\n", hour + 1);
	}
	if (hour > 11 && hour < 24)
	{
		if (hour != 12)
			hour = hour % 12;
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i.00 P.M. ", hour);
		if (hour != 11)
			printf("AND %i.00 P.M.\n", (hour % 12) + 1);
		else
			printf("AND %i.00 A.M.\n", 12);
	}
}
