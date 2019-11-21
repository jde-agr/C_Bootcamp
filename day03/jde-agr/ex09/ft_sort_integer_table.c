/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 12:20:47 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/13 13:44:20 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j <= size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
				j++;
			}
			else
			{
				j++;
			}
		}
		i++;
		j = i + 1;
	}
}
