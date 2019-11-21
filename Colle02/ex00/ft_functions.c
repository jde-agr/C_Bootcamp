/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 09:13:56 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/29 11:12:08 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int		is_valid(char *str, int rows, int cols)
{
	int row;
	int col;

	row = 0;
	while (*str)
	{
		col = 0;
		while (col++ < cols && *str)
			str++;
		if (*str != '\n')
		{
			write(1, "aucune\n", 7);
			return (0);
		}
		rows++;
		str++;
	}
	if (row < rows)
	{
		write(1, "aucune\n", 7);
		return (0);
	}
	return (1);
}

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

int		ft_same(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	if (*s1 || *s2)
		return (0);
	return (1);
}
