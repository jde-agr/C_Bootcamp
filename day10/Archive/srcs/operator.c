/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 23:04:07 by jburger           #+#    #+#             */
/*   Updated: 2018/04/24 09:14:46 by jburger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/do_op.h"

int		operator(int a, char b, int c)
{
	if (b == '+')
		return (a + c);
	else if (b == '-')
		return (a - c);
	else if (b == '*')
		return (a * c);
	else if (b == '/')
		return (a / c);
	else if (b == '%')
		return (a % c);
	return (0);
}
