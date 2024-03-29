/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 09:32:57 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/20 10:14:49 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int		i;
	int		j;
	char	**tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < length)
	{
		if (tab[i] != 0)
		{
			tmp[j] = tab[i];
			i++;
			j++;
		}
		i++;
	}
	tab = tmp;
	return ((int)sizeof(tab));
}
