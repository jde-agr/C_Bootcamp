/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 10:05:20 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/23 10:55:08 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int count;

	count = 0;
	while (*tab != 0)
	{
		if (f(*(tab++)))
			count++;
	}
	return (count);
}
