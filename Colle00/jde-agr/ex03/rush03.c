/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 12:43:08 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/15 12:43:53 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	char_placement(char a, char b, char c, int len)
{
	int i;

	i = 0;
	ft_putchar(a);
	while (i < (len - 2))
	{
		ft_putchar(b);
		i++;
	}
	if (len > 1)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x <= 0 || y <= 0)
		write(1, "Input is too small.\n", 20);
	if (x > 342 || y > 42)
		write(1, "Input is too big.\n", 18);
	if (x > 0 && y > 0 && x <= 47 && y <= 47)
	{
		char_placement('A', 'B', 'C', x);
		if (y > 2)
		{
			while (i < (y - 2))
			{
				char_placement('B', ' ', 'B', x);
				i++;
			}
		}
		if (y > 1)
			char_placement('A', 'B', 'C', x);
	}
	else
		write(1, "Invalid input. Please input a number.\n", 38);
}
