/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:18:31 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/12 18:25:52 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_combn(int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < (n + 1))
		while (j < (n + 1))
		{
			ft_putchar(i);
			ft_putchar(j + 1);
			if (i == n && j == n)
			{
				ft_putchar(32);
				ft_putchar(44);
			}
		}
}
