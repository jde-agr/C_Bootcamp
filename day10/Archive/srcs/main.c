/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 23:03:55 by jburger           #+#    #+#             */
/*   Updated: 2018/04/24 09:14:37 by jburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/do_op.h"

int		main(int ac, char *av[])
{
	if (ac == 4)
	{
		if (av[2][0] == '+' || av[2][0] == '-' || av[2][0] == '*')
			ft_putnbr(operator(ft_atoi(av[1]), av[2][0], ft_atoi(av[3])));
		else if (av[2][0] == '/' || av[2][0] == '%')
		{
			if (ft_atoi(av[3]) == 0 && av[2][0] == '/')
				write(1, "Stop : division by zero", 23);
			else if (ft_atoi(av[3]) == 0 && av[2][0] == '%')
				write(1, "Stop : modulo by zero", 21);
			else
				ft_putnbr(operator(ft_atoi(av[1]), av[2][0], ft_atoi(av[3])));
		}
	}
	write(1, "\n", 1);
	return (0);
}
