/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 13:50:54 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/15 14:56:02 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb > 2)
		return (0);
	while (i < (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int next_prime;
	int found;

	next_prime = nb;
	found = 0;
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	while (found != 1)
	{
		next_prime++;
		if (ft_is_prime(next_prime))
			found = 1;
	}
	return (next_prime);
}
