/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 09:30:54 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/28 13:11:11 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_header.h"

int		ft_read_num(char **pos)
{
	int num;
	int sign;

	num = 0;
	sign = 1;
	if ((*pos)[0] == '-')
	{
		sign = -1;
		*pos += 1;
	}
	if ((*pos)[0] == '(')
	{
		*pos += 1;
		num = ft_sum(pos);
		if ((*pos)[0] == ')')
			*pos += 1;
		return (sign * num);
	}
	while ((*pos)[0] >= '0' && (*pos)[0] <= '9')
	{
		num = (num * 10) + (*pos)[0] - '0';
		*pos += 1;
	}
	return (sign * num);
}

int		ft_sum(char **pos)
{
	int		num1;
	int		num2;
	char	op;

	num1 = ft_read_num(pos);
	while ((*pos)[0] != '\0' && (*pos)[0] != ')')
	{
		op = (*pos)[0];
		*pos += 1;
		if (op == '+' || op == '-')
			num2 = ft_factor(pos);
		else
			num2 = ft_read_num(pos);
		num1 = do_op(num1, num2, op);
	}
	return (num1);
}

int		ft_factor(char **pos)
{
	int		num1;
	int		num2;
	char	op;

	num1 = ft_read_num(pos);
	while ((*pos)[0] == '*' || (*pos)[0] == '/' || (*pos)[0] == '%')
	{
		op = (*pos)[0];
		*pos += 1;
		num2 = ft_read_num(pos);
		num1 = do_op(num1, num2, op);
	}
	return (num1);
}

int		eval_expr(char *str)
{
	str = elim_spaces(str);
	if (str[0] == '\0')
		return (0);
	return (ft_sum(&str));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
