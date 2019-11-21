/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 11:27:59 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/20 11:41:21 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 1;
	while (i < length)
	{
		while (j < length)
		{
			if (tab[j] == tab[i] && j != i)
				count++;
			j++;
		}
		if (j == length && count % 2 != 0)
		{
			return (tab[i]);
		}
		count = 1;
		i++;
		j = 0;
	}
	return (0);
}
