/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 14:09:35 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/14 15:34:56 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = power;
	result = 1;
	if (power < 0)
		return (0);
	else
	{
		while (i > 0)
		{
			result = result * nb;
			i--;
		}
	}
	return (result);
}
