/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 13:13:00 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/02 17:26:30 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/read.h"
#include "../headers/ft_solve_square.h"
#include "../headers/read_stdin.h"
#include "../headers/user_error.h"
#include "../headers/file_error.h"

int		solve_from_file(char **argv, int i)
{
	int		max;
	char	**arr;
	int		found;

	while (argv[i])
	{
		if ((found = read_row(argv[i])) == 0)
		{
			read_row(argv[i]);
			arr = create_char_array(g_buf);
			if (!(file_check_columns(arr) == 0 ||
						compare_file_descriptors(arr) == 0))
			{
				copy_to_num(arr, 0);
				solve_sq(g_num_arr, g_row, g_col);
				max = find_max(g_num_arr, g_row, g_col);
				assign_square(g_num_arr, max);
				print_sol(arr, g_num_arr);
			}
		}
		else
			write(1, "Error with Input\n\n", 17);
		i++;
	}
	return (1);
}

void	solve_from_input(void)
{
	int		max;
	char	**arr;

	if (read_stdin() == 1)
	{
		arr = create_char_array(g_buf);
		copy_to_num(arr, 0);
		solve_sq(g_num_arr, g_row, g_col);
		max = find_max(g_num_arr, g_row, g_col);
		assign_square(g_num_arr, max);
		print_sol(arr, g_num_arr);
		write(1, "\n", 1);
	}
}

char	**create_user_char(char **argv)
{
	char	**arr;
	int		index;
	int		i;
	int		j;

	index = -1;
	arr = (char **)malloc(g_row * sizeof(char *));
	while (index++ < g_row)
		arr[index] = (char *)malloc(g_col * sizeof(char *));
	index = 0;
	i = 0;
	while (i < g_row)
	{
		j = 0;
		while (j < g_col)
		{
			arr[i][j] = argv[i + 2][j];
			j++;
		}
		i++;
	}
	return (arr);
}

void	solve_from_user(int argc, char **argv)
{
	int		max;
	char	**arr;

	give_value(argc, argv);
	arr = create_user_char(argv);
	solve_sq(g_num_arr, g_row, g_col);
	max = find_max(g_num_arr, g_row, g_col);
	assign_square(g_num_arr, max);
	print_sol(arr, g_num_arr);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		if (argv[1][0] >= '0' && argv[1][0] <= '9')
		{
			if (user_error(argc, argv) == 1)
				solve_from_user(argc, argv);
			else
				write(1, "Invalid input\n", 14);
		}
		else if (solve_from_file(argv, i) == 0)
			write(1, "Incorrect InputSOL\n", 19);
	}
	else if (argc == 1)
		solve_from_input();
	else
		write(1, "Incorrect Input\n", 16);
	return (0);
}
