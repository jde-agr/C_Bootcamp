/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 06:38:55 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/26 17:43:15 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE_H
# define FT_DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h>
# define BUF_SIZE 4096

void	ft_display(char *arg);
void	ft_putstr(char *str);
void	ft_puterror(char *str);
int		is_input_valid(int argc);
int		ft_strlen(char *str);

#endif
