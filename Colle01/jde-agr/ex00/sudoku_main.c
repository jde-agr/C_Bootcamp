/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 15:08:18 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/22 17:38:51 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_fill_input(int **puzzle, char **argv);

int		ft_fill_sudoku(int **puzzle, int row, int col);

void	ft_process(int **puzzle, char **argv, int i, int j)
{
	int k;

	ft_fill_input(puzzle, argv);
	if (ft_fill_sudoku(puzzle, 0, 0))
	{
		while (i < 10)
		{
			j = 0;
			while (j < 9)
			{
				k = puzzle[i - 1][j] + 48;
				if (j == 0)
					write(1, &k, 1);
				else
				{
					write(1, " ", 1);
					write(1, &k, 1);
				}
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "Unable to solve", 15);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int **puzzle;

	i = 1;
	j = 0;
	puzzle = (int**)malloc(sizeof(int**) * 9);
	while (j < 9)
	{
		puzzle[j] = (int*)malloc(sizeof(int*) * 9);
		j++;
	}
	if (argc == 10)
	{
		ft_process(puzzle, argv, i, j);
	}
	else
		write(1, "\n\nNO SOLUTION\n\n", 15);
	return (0);
}
