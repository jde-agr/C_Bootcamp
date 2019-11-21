/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_sudoku.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 15:11:57 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/22 18:04:23 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_available(int **puzzle, int row, int col, int num);

int		ft_fill_sudoku(int **puzzle, int row, int col)
{
	int i;

	i = 0;
	if (row < 9 && col < 9)
	{
		if (puzzle[row][col] != 0)
		{
			if ((col + 1) < 9)
				return (ft_fill_sudoku(puzzle, row, col + 1));
			else if ((row + 1) < 9)
				return (ft_fill_sudoku(puzzle, row + 1, 0));
			else
				return (1);
		}
		else
		{
			while (i < 9)
			{
				if (ft_is_available(puzzle, row, col, i + 1))
				{
					puzzle[row][col] = i + 1;
					if ((col + 1) < 9)
					{
						if (ft_fill_sudoku(puzzle, row, col + 1))
							return (1);
						else
							puzzle[row][col] = 0;
					}
					else if ((row + 1) < 9)
					{
						if (ft_fill_sudoku(puzzle, row + 1, 0))
							return (1);
						else
							puzzle[row][col] = 0;
					}
					else
						return (1);
				}
				i++;
			}
		}
		return (0);
	}
	else
		return (1);
}
