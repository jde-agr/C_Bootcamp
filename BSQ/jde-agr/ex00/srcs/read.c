/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 10:32:07 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/02 16:48:44 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/read.h"
#include "../headers/read_stdin.h"
#include "../headers/file_error.h"

int		g_col;
int		g_row;
char	g_buf[BUF_SIZE + 1];
int		**g_num_arr;

char	g_obstacle;
char	g_space;
char	g_fill;

void	copy_to_num(char **c, int start)
{
	int i;
	int j;
	int index;

	index = -1;
	g_num_arr = (int **)malloc(g_row * sizeof(int *) + 1);
	while (index++ < g_row)
		g_num_arr[index] = (int *)malloc(g_col * sizeof(int *) + 1);
	i = start;
	while (i < g_row + start)
	{
		j = 0;
		while (j < g_col)
		{
			if (c[i][j] == g_obstacle)
				g_num_arr[i - start][j] = 0;
			else
				g_num_arr[i - start][j] = -1;
			j++;
		}
		i++;
	}
}

void	assign_value(char **arr, int index, char *c)
{
	int i;
	int j;

	i = 0;
	while (i < g_row)
	{
		j = 0;
		while (j < g_col)
		{
			arr[i][j] = c[index];
			index++;
			j++;
		}
		index++;
		i++;
	}
}

char	**create_char_array(char *c)
{
	char	**arr;
	int		index;

	index = -1;
	arr = (char **)malloc(g_row * sizeof(char *));
	while (index++ < g_row)
		arr[index] = (char *)malloc(g_col * sizeof(char *));
	index = 0;
	while (c[index] != '\n')
		index++;
	index++;
	assign_value(arr, index, c);
	return (arr);
}

int		count_col(char *c)
{
	int		index;
	int		count;
	char	*nc;

	nc = (char *)malloc(sizeof(c));
	count = 0;
	index = 0;
	while (c[index] != '\n')
		index++;
	g_fill = c[--index];
	g_obstacle = c[--index];
	g_space = c[--index];
	while (count < index)
	{
		nc[count] = c[count];
		count++;
	}
	g_row = ft_atoi(nc);
	index = index + 5;
	while (c[index] != '\n')
	{
		index++;
		count++;
	}
	return (count);
}

int		read_row(char *c)
{
	int fd;
	int size;

	size = 0;
	fd = open(c, O_RDONLY);
	if (fd != -1)
	{
		size = read(fd, g_buf, BUF_SIZE);
		g_buf[size] = '\0';
		g_col = count_col(g_buf);
		if (g_row > 9)
			g_col--;
		if (g_row > 99)
			g_col--;
		if (g_row > 999)
			g_col--;
		close(fd);
	}
	else
	{
		return (-1);
	}
	if (count_file_descriptor(g_buf) == 0)
		return (-1);
	return (0);
}
