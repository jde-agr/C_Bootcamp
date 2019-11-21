/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 14:48:25 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/02 17:27:11 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/read.h"

int	compare_file_descriptors(char **argv)
{
	int i;
	int j;

	i = 0;
	if (g_fill == g_space)
		return (0);
	if (g_space == g_obstacle)
		return (0);
	if (g_obstacle == g_fill)
		return (0);
	while (i < g_row)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] != g_space && argv[i][j] != g_obstacle)
			{
				write(1, "Incorrect descriptors\n", 23);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	file_check_columns(char **arr)
{
	int i;
	int j;
	int size_a;

	i = 0;
	j = 0;
	size_a = 0;
	while (arr[i][j] != '\0')
		j++;
	size_a = j;
	while (i < g_row)
	{
		j = 0;
		while (arr[i][j] != '\0')
			j++;
		if (j != size_a || j != g_col)
		{
			write(1, "Incorrect cols\n", 15);
			return (0);
		}
		i++;
	}
	return (1);
}

int	count_file_descriptor(char *c)
{
	int		count;
	int		desc;

	desc = 3;
	count = 0;
	while (c[count] != '\n')
		count++;
	count--;
	while (c[count] < '0' || c[count] > '9')
	{
		desc--;
		count--;
		if (desc < 0)
			return (0);
	}
	if (g_row > 82 || g_col > 183)
		return (0);
	return (1);
}
