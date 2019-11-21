/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inputcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 16:22:21 by tpatter           #+#    #+#             */
/*   Updated: 2018/04/29 17:24:35 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_rush.h"

int	ft_inputcheck(char *str)
{
	int	i;

	i = 0;
	if (!str[0] || str[0] == '\n')
		return (0);
	while (str[i])
	{
		if (str[i] < 'A' && str[i] > 'C' && str[i] != '*' && str[i] != 'o'
				&& str[i] != '/' && str[i] != '\\' && str[i] != '|'
				&& str[i] != '-' && str[i] != '\n' && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
