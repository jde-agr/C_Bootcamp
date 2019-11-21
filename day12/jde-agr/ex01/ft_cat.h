/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 18:07:05 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/26 18:13:51 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <fcntl.h>
# define BUF_SIZE 4096

void	ft_display(char *arg);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
int		is_input_valid(int argc);
int		ft_strlen(char *str);

#endif
