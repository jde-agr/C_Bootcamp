/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 11:12:40 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/29 17:24:49 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_rush.h"
#define BUF_SIZE 4096
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
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

void	print_res(char *str, int rows, int cols)
{
	int i;

	i = 0;
	write(1, "[", 1);
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	write(1, "] [", 3);
	ft_putnbr(cols);
	write(1, "] [", 3);
	ft_putnbr(rows);
	write(1, "]", 1);
}

int		main(void)
{
	char	*input;
	int		ret;
	char	**ans;
	int		i;

	i = 0;
	input = (char*)malloc(sizeof(char) * BUF_SIZE + 1);
	ret = read(0, input, BUF_SIZE);
	input[ret] = '\0';
	ans = ft_idrush(input, ft_col_count(input), ft_row_count(input));
	if (!ans[0][0] || !(ft_inputcheck(input)))
		write(1, "aucune\n", 7);
	else
	{
		while (ans[i])
		{
			if (i > 0)
				write(1, " || ", 4);
			print_res(ans[i], ft_row_count(input), ft_col_count(input));
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
