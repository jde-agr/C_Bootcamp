/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 11:46:30 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/14 13:38:31 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = nb;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		while (nb > 1)
		{
			fact = fact * (nb - 1);
			nb--;
		}
	}
	return (fact);
}
