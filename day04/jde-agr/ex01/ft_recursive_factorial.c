/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:42:03 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/15 09:38:40 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int fact;

	fact = nb;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb > 0)
	{
		fact = nb * ft_recursive_factorial(nb - 1);
		return (fact);
	}
	else
		return (1);
}

int		main(void)
{
	int a;

	a = ft_recursive_factorial(5);
	printf("%i", a);
}
