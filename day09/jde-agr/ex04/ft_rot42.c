/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 19:21:07 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/19 22:12:04 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;
	int shift;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] < 'k')
			shift = 16;
		else if (str[i] >= 'A' && str[i] < 'K')
			shift = 16;
		else if (str[i] >= 'k' && str[i] <= 'z')
			shift = -10;
		else if (str[i] >= 'K' && str[i] <= 'Z')
			shift = -10;
		else
			shift = 0;
		str[i] = str[i] + shift;
		i++;
	}
	return (str);
}
