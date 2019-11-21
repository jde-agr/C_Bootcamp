/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_error.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 12:16:51 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/02 13:21:14 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USER_ERROR_H
# define USER_ERROR_H

int compare_descriptors(int argc, char **argv, int len);
int check_columns(int argc, char **argv);
int count_descriptors(int argc, char **argv);
int user_error(int argc, char **argv);

#endif
