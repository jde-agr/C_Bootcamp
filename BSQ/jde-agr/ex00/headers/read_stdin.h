/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_stdin.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 17:36:19 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/02 16:56:26 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_STDIN_H
# define READ_STDIN_H

char	g_fill;
char	g_obstacle;
char	g_space;

int		read_stdin(void);
void	give_value(int i, char **str);
int		is_digit(char c);
int		ft_atoi(char *str);

#endif
