/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 08:37:26 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/17 10:41:41 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0)
			str[i] = str[i] - 32;
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64))
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		i++;
	}
	return (str);
}
