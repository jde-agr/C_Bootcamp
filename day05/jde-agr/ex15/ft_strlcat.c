/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 16:48:31 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/17 17:12:45 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int n;

	i = ft_strlen(dest);
	j = 0;
	n = size - i - 1;
	while (src[j] != '\0' && n > 0)
	{
		dest[i + j] = src[j];
		j++;
		n--;
	}
	dest[i + j] = '\0';
	return (dest);
}
