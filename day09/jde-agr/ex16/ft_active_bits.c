/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 10:46:36 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/20 11:01:01 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int val;
	int count;

	val = (int)value;
	count = 0;
	while (val)
	{
		count += val % 2;
		val >>= 1;
	}
	return (count);
}
