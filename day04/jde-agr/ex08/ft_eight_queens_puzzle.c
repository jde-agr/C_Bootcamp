/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 14:59:16 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/15 17:51:07 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_safe(int rows[8], int x, int y)  
{
	int i;

	i = 0;
	if (y == 0)
		return (1);
	while (i < y)
	{
		if (rows[i] == x || rows[i] == x + y - i || rows[i] == x - y + i)
			return (0);
		i++;
    }

    return (1);
}

int		count_solutions(int rows[8])
{
	 int count;

	count = 0;
	count++;
	return (count);
}

void		eight_queens_helper(int rows[8], int y)
{
    int x;
	int num;
	int count;

	x = 0;
	num = 0;
	count = 0;
	while (x < 8)
	{
        if (is_safe(rows, x, y))
		{
            rows[y] = x;
            if (y == 7)
			{
              num = num + count_solutions(rows);
			}
            else
			{
              eight_queens_helper(rows, y + 1);
			  count++;
			}
        }
		x++;
    }
	printf("Count %i \n", count);
}

int		main()
{
    int rows[8];
	int numsol;

	eight_queens_helper(rows, 0);
	//numsol = eight_queens_helper(rows, 0);
	//printf("Solutions : %i", numsol);
    return (0);
}
