/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 10:55:29 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/16 10:56:10 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	int len;

	i = 0;
	len = (int)n;
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
	return (dest);
}
