/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 15:56:36 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/14 16:30:52 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int fib;

	fib = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 2)
	{
		fib = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (fib);
	}
	return (fib);
}
