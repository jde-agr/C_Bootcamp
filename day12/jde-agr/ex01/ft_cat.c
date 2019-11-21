/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 18:10:35 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/26 18:11:36 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_puterror("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_puterror("Too many arguments.\n");
		return (0);
	}
	ft_display(argv[1]);
	return (0);
}

void	ft_display(char *arg)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(arg, O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_puterror(char *str)
{
	write(2, str, ft_strlen(str));
}
