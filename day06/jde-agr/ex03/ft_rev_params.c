/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 11:28:16 by jde-agr           #+#    #+#             */
/*   Updated: 2018/04/18 11:49:25 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		count_params(char **argv)
{
	int i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int count;

	i = 1;
	j = 0;
	count = count_params(argv);
	if (argc > 1)
	{
		while (argv[i])
		{
			while (argv[count - i][j] != '\0')
			{
				ft_putchar(argv[count - i][j]);
				j++;
			}
			ft_putchar('\n');
			j = 0;
			i++;
		}
	}
	return (0);
}
