/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 20:56:34 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/19 22:19:32 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if (i > j)
	{
		if (i > k)
			return (k);
		else if (k > i)
			return (i);
		else
			return (j);
	}
	else
	{
		if (j > k)
			return (k);
		else if (i > k)
			return (i);
		else
			return (j);
	}
}
