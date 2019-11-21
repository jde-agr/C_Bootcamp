/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 17:15:05 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/17 17:39:52 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int len;

	i = 0;
	len = size - 1;
	while (src[i] != '\0' && i < len)
	{
		dest[i] = src[i];
		i++;
	}
	if (i == len)
		dest[i] = '\0';
	else
	{
		while (i < len)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (i + 1);
}
