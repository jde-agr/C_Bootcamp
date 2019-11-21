/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 09:08:39 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/29 16:57:38 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# include <unistd.h>
# include <stdlib.h>

char	**ft_idrush(char *str, int col, int row);
int		ft_row_count(char *str);
int		ft_col_count(char *str);
int		ft_same(char *s1, char *s2);
int		ft_inputcheck(char *str);

#endif
