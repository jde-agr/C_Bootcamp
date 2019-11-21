/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:43:04 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/12 17:20:12 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_generate_comb(int i, int j, int k)
{
	if (k != j && k != i && j != i)
	{
		ft_putchar(48 + i);
		ft_putchar(48 + j);
		ft_putchar(48 + k);
		if (i == 7 && j == 8 && k == 9)
			return ;
		else
		{
			ft_putchar(44);
			ft_putchar(32);
		}
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = 2;
	while (i < 8)
	{
		while (j < 9)
		{
			while (k < 10)
			{
				ft_generate_comb(i, j, k);
				k++;
			}
			k = j + 1;
			j++;
		}
		j = i + 1;
		i++;
	}
}
