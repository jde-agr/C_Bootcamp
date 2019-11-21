/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 11:12:40 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/29 11:29:35 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#define BUF_SIZE 4096

int	main(void)
{
	char input[BUF_SIZE + 1];
	int ret;

	ret = read(1, input, BUF_SIZE);
	if (ret == 0)
		return (1);
	input[ret] = '\0';
	if (is_valid(input, ft_row_count(input), ft_col_count(input)))
		ft_find_rush(input);
	return (0);
}
