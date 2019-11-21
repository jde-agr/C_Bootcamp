/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 13:52:22 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/02 16:05:08 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_H
# define READ_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

# define BUF_SIZE 4096

int		g_col;
int		g_row;
char	g_buf[BUF_SIZE + 1];
int		**g_num_arr;

char	g_obstacle;
char	g_space;
char	g_fill;

void	copy_to_num(char **c, int start);
void	assign_value(char **arr, int index, char *c);
char	**create_char_array(char *c);
int		count_col(char *c);
int		read_row(char *c);

#endif
