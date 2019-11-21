/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 09:41:50 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/02 17:26:48 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_solve_square.h"
#include "../headers/read.h"
#include "../headers/read_stdin.h"

int g_x;
int g_y;

int		find_min(int **puzzle, int row, int col)
{
	int min;

	min = 999;
	if (puzzle[row - 1][col] < min)
		min = puzzle[row - 1][col];
	if (puzzle[row - 1][col - 1] < min)
		min = puzzle[row - 1][col - 1];
	if (puzzle[row][col - 1] < min)
		min = puzzle[row][col - 1];
	return (min);
}

int		find_max(int **puzzle, int rows, int cols)
{
	int i;
	int j;
	int max;

	i = 0;
	max = -1;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (puzzle[i][j] > max)
			{
				max = puzzle[i][j];
				g_x = i;
				g_y = j;
			}
			j++;
		}
		i++;
	}
	return (max);
}

void	solve_sq(int **puzzle, int rows, int cols)
{
	int i;
	int j;
	int min;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if ((i == 0 || j == 0) && puzzle[i][j] != 0)
				puzzle[i][j] = 1;
			else if (i >= 1 && j >= 1)
			{
				if (puzzle[i][j] == -1)
				{
					min = find_min(puzzle, i, j);
					puzzle[i][j] = min + 1;
				}
			}
			j++;
		}
		i++;
	}
}

void	assign_square(int **puzzle, int max)
{
	int i;
	int j;

	i = 0;
	while (i < max)
	{
		j = 0;
		while (j < max)
		{
			puzzle[g_x - i][g_y - j] = -1;
			j++;
		}
		i++;
	}
}

void	print_sol(char **sq, int **puzzle)
{
	int i;
	int j;

	i = 0;
	while (i < g_row)
	{
		j = 0;
		while (j < g_col)
		{
			if (puzzle[i][j] == -1)
				sq[i][j] = g_fill;
			else if (puzzle[i][j] == 0)
				sq[i][j] = g_obstacle;
			else
				sq[i][j] = g_space;
			write(1, &sq[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}
