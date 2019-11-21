/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 11:00:19 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/16 16:42:43 by jde-agr          ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			if (j == len - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
