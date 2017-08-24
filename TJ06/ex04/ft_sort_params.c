/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:44:29 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/16 20:56:18 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int l;
	char *tmp;

	i = 0;
	l = argc - 1;
	while (l > 1)
	{
		if (ft_strcmp(argv[l], argv[l - 1]) < 0)
		{
			tmp = argv[l];
			argv[l] = argv[l - 1];
			argv[l - 1] = tmp;
			l = argc;
		}
		l--;
	}
	l = 1;
	while (l < argc)
	{
		i = 0;
		while (argv[l][i] != '\0')
		{
			ft_putchar(argv[l][i]);
			i++;
		}
		ft_putchar(' ');
		l++;
	}
	return (0);
}
