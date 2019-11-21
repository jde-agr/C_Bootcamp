/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_idrush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 10:21:31 by tpatter           #+#    #+#             */
/*   Updated: 2018/04/29 17:24:20 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_rush.h"
#include <stdlib.h>

char	**ft_idsingle(char *str)
{
	char	**tmp;
	int		i;

	i = 0;
	tmp = (char**)malloc(sizeof(char*) * 4);
	while (i < 3)
	{
		tmp[i] = (char*)malloc(sizeof(char) * 8);
		i++;
	}
	tmp[1] = NULL;
	if (str[0] == 'o')
		tmp[0] = "rush-00";
	if (str[0] == '/')
		tmp[0] = "rush-01";
	if (str[0] == 'A')
	{
		tmp[0] = "rush-02";
		tmp[1] = "rush-03";
		tmp[2] = "rush-04";
		tmp[3] = NULL;
	}
	return (tmp);
}

char	**ft_idcol(char *str, int row, int col)
{
	char	**tmp;
	int		i;

	i = 0;
	tmp = (char**)malloc(sizeof(char*) * 4);
	while (i < 3)
	{
		tmp[i] = (char*)malloc(sizeof(char) * 8);
		i++;
	}
	tmp[1] = NULL;
	if (str[0] == 'o')
		tmp[0] = "rush-00";
	if (str[0] == '/')
		tmp[0] = "rush-01";
	if (str[0] == 'A' && str[(col + 1) * row - 2] == 'C')
	{
		tmp[0] = "rush-02";
		tmp[1] = "rush-04";
		tmp[2] = NULL;
	}
	if (str[0] == 'A' && str[(col + 1) * row - 2] == 'A')
		tmp[0] = "rush-03";
	return (tmp);
}

char	**ft_idrow(char *str, int col, int row)
{
	char	**tmp;
	int		i;

	i = 0;
	tmp = (char**)malloc(sizeof(char*) * 4);
	while (i < 3)
	{
		tmp[i] = (char*)malloc(sizeof(char) * 8);
		i++;
	}
	tmp[1] = NULL;
	if (str[0] == 'o')
		tmp[0] = "rush-00";
	if (str[0] == '/')
		tmp[0] = "rush-01";
	if (str[0] == 'A' && str[(col + 1) * row - 2] == 'C')
	{
		tmp[0] = "rush-03";
		tmp[1] = "rush-04";
		tmp[2] = NULL;
	}
	if (str[0] == 'A' && str[(col + 1) * row - 2] == 'A')
		tmp[0] = "rush-02";
	return (tmp);
}

char	**ft_idblock(char *str, int col, int row)
{
	char	**tmp;

	tmp = (char**)malloc(sizeof(char*) * 2);
	tmp[0] = (char*)malloc(sizeof(char) * 8);
	tmp[1] = NULL;
	if (str[0] == 'o')
		tmp[0] = "rush-00";
	if (str[0] == '/')
		tmp[0] = "rush-01";
	if (str[(col + 1) * row - 2] == 'C' && str[col - 1] == 'A')
		tmp[0] = "rush-02";
	if (str[(col + 1) * row - 2] == 'C' && str[col - 1] == 'C')
		tmp[0] = "rush-03";
	if (str[(col + 1) * row - 2] == 'A' && str[col - 1] == 'C')
		tmp[0] = "rush-04";
	return (tmp);
}

char	**ft_idrush(char *str, int col, int row)
{
	if (col == 1 && row == 1)
		return (ft_idsingle(str));
	if (col == 1)
		return (ft_idcol(str, row, col));
	if (row == 1)
		return (ft_idrow(str, col, row));
	return (ft_idblock(str, col, row));
}
