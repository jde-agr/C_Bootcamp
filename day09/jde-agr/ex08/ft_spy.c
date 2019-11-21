/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 00:51:55 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/20 01:42:18 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

void	ft_is_present(char *str)
{
	char	*att;
	char	*pow;
	char	*pre;
	int		i;
	int		j;

	att = "attack";
	pow = "powers";
	pre = "president";
	i = 0;
	j = 0;
	if (ft_strcmp(str, att) == 0)
		ft_putstr("Alert!!!\n");
	if (ft_strcmp(str, pow) == 0)
		ft_putstr("Alert!!!\n");
	if (ft_strcmp(str, pre) == 0)
		ft_putstr("Alert!!!\n");
}

int		main(int argc, char **argv)
{
	char	str[100];
	int		i;
	int		j;
	int		k;

	i = 1;
	while (i < argc)
	{
		j = 0;
		k = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ')
			{
				str[k] = argv[i][j];
				k++;
			}
			j++;
		}
		str[j] = '\0';
		ft_strlowcase(str);
		ft_is_present(str);
		i++;
	}
	return (0);
}
