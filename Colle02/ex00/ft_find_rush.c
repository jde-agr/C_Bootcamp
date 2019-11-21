/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_rush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 11:22:51 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/29 11:50:01 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num *= -1;
	}
	if (num < 10)
	{
		ft_putchar(num + 48);
		return ;
	}
	ft_putnbr(num / 10);
	ft_putchar((num % 10) + 48);
}

void	ft_putrush(char rush, int rows, int cols, int match)
{
	if (match > 0)
		write(1, " || ", 4);
	write(1, "[rush-0", 7);
	write(1, &rush, 1);
	write(1, "] [", 3);
	ft_putnbr(cols);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
}

void	ft_find_rush(char *str)
{
	//////does something here
	//if same (ft_same) then return rush (ft_putrush)
	//no matches then return "aucune"
	//new line
}
