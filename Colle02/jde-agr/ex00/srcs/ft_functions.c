/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 09:13:56 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/29 17:24:04 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_rush.h"

int		ft_row_count(char *str)
{
	int rows;

	rows = 0;
	while (*str)
	{
		if (*str == '\n')
			rows++;
		str++;
	}
	return (rows);
}

int		ft_col_count(char *str)
{
	int cols;

	cols = 0;
	while (*str != '\n' && *str)
	{
		cols++;
		str++;
	}
	return (cols);
}
