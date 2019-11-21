/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 10:08:12 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/19 12:08:34 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		cmd_line_size(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 1;
	j = 0;
	size = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			size++;
			j++;
		}
		j = 0;
		i++;
	}
	if (argc > 2)
		size = size + (argc - 2);
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		total_size;
	char	*str;

	total_size = cmd_line_size(argc, argv);
	str = (char*)malloc(sizeof(*str) * (total_size + 1));
	i = 1;
	j = 0;
	k = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			str[k++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[k++] = '\n';
		j = 0;
		i++;
	}
	str[k] = '\0';
	return (str);
}
