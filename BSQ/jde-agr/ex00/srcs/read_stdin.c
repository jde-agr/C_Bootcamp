/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 16:53:51 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/02 17:22:30 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/read.h"
#include "../headers/read_stdin.h"

int		read_stdin(void)
{
	int ret;

	ret = read(0, g_buf, BUF_SIZE);
	g_buf[ret] = '\0';
	g_col = count_col(g_buf);
	if (g_row > 82 || g_col > 183)
	{
		write(1, "Out of bounds : Cols <= 182 & Rows <= 81\n", 42);
		return (0);
	}
	if (g_row > 9)
		g_col--;
	if (g_row > 99)
		g_col--;
	if (g_row > 999)
		g_col--;
	if (g_buf[0] == '\0')
		write(2, "Incorrect Input\n", 16);
	return (1);
}

void	give_value(int i, char **str)
{
	int		index;
	int		count;
	char	*nc;

	g_row = i - 2;
	g_col = 0;
	index = 0;
	while (str[2][g_col] != '\0')
		g_col++;
	while (str[1][index] != '\0')
		index++;
	nc = (char *)malloc(sizeof(str[1]));
	count = 0;
	g_fill = str[1][--index];
	g_obstacle = str[1][--index];
	g_space = str[1][--index];
	while (count < index)
	{
		nc[count] = str[1][count];
		count++;
	}
	g_row = ft_atoi(nc);
	copy_to_num(str, 2);
}

int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int sum;

	sign = 1;
	i = 0;
	sum = 0;
	while ((str[i] < '0' || str[i] > '9') && str[i] != '+' && str[i] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (is_digit(str[i]))
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sum * sign);
}
