/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 09:08:18 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/28 09:47:47 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int num);
int		do_op(int num1, int num2, char op);
char	*elim_spaces(char *str);
int		ft_read_num(char **pos);
int		ft_sum(char **pos);
int		ft_factor(char **pos);
int		eval_expr(char *str);

#endif
