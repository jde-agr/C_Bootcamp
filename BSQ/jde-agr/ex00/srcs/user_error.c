/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 11:22:02 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/02 15:49:05 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/read_stdin.h"
#include "../headers/user_error.h"

int	compare_descriptors(int argc, char **argv, int len)
{
	int i;
	int j;

	i = 0;
	if (argv[1][len] == argv[1][len - 1])
		return (0);
	if (argv[1][len - 1] == argv[1][len - 2])
		return (0);
	if (argv[1][len] == argv[1][len - 2])
		return (0);
	while (i < argc - 2)
	{
		j = 0;
		while (argv[i + 2][j] != '\0')
		{
			if (argv[i + 2][j] != argv[1][len - 1] &&
					argv[i + 2][j] != argv[1][len - 2])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_columns(int argc, char **argv)
{
	int i;
	int j;
	int size_a;

	i = 0;
	j = 0;
	size_a = 0;
	while (argv[2 + i][j] != '\0')
		j++;
	j--;
	size_a = j;
	while (i < argc - 2)
	{
		j = 0;
		while (argv[2 + i][j] != '\0')
			j++;
		j--;
		if (j != size_a)
			return (0);
		i++;
	}
	return (1);
}

int	count_descriptors(int argc, char **argv)
{
	int count;
	int desc;

	count = 0;
	desc = 3;
	while (argv[1][count] != '\0')
		count++;
	count--;
	if (compare_descriptors(argc, argv, count) == 0)
		return (0);
	while (argv[1][count] < '0' || argv[1][count] > '9')
	{
		desc--;
		count--;
		if (desc < 0)
			return (0);
	}
	return (1);
}

int	user_error(int argc, char **argv)
{
	int valid;

	valid = 1;
	if (ft_atoi(argv[1]) != argc - 2)
		valid = 0;
	if (check_columns(argc, argv) == 0)
		valid = 0;
	if (count_descriptors(argc, argv) == 0)
		valid = 0;
	return (valid);
}
