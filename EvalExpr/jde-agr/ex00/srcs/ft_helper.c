/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_helper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 09:17:32 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/28 09:49:09 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr(int num)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
		ft_putchar(num + 48);
}

int		do_op(int num1, int num2, char op)
{
	if (op == '+')
		return (num1 + num2);
	else if (op == '-')
		return (num1 - num2);
	else if (op == '*')
		return (num1 * num2);
	else if (op == '/')
		return (num1 / num2);
	else if (op == '%')
		return (num1 % num2);
	else
		return (0);
}

char	*elim_spaces(char *str)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = 0;
	tmp = malloc(sizeof(char) * (ft_strlen(str)));
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			tmp[j] = str[i];
			j++;
		}
		i++;
	}
	tmp[j] = '\0';
	return (tmp);
}
