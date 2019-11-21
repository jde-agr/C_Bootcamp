/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 09:08:39 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/29 11:11:12 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <unistd.h>
# include <stdlib.h>

int		is_valid(char *str, int rows, int cols);
void	ft_find_rush(char *str);
int		ft_row_count(char *str);
int		ft_col_count(char *str);
int		ft_same(char *s1, char *s2);
void	ft_putchar(char c);
void	ft_putnbr(int num);
void	ft_putrush(char rush, int rows, int cols, int match);

#endif
