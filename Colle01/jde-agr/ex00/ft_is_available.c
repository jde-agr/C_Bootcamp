/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_available.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 15:09:19 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/22 17:54:31 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_available(int **puzzle, int row, int col, int num)
{
	int row_start;
	int col_start;
	int i;

	i = 0;
	row_start = (row / 3) * 3;
	col_start = (col / 3) * 3;
	while (i < 9)
	{
		if (puzzle[row][i] == num)
			return (0);
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[row_start + (i % 3)][col_start + (i / 3)] == num)
			return (0);
		i++;
	}
	return (1);
}
