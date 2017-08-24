/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 17:50:46 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/20 15:20:26 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		compteur(int argc, char **argv, int len)
{
	int i;
	int j;

	len = 0;
	i = 0;
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			i++;
			len++;
		}
		j++;
	}
	return (len);
}

char	*backslash(char *uni, int y)
{
	y = y - 1;
	uni[y] = '\0';
	return (uni);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*uni;
	int		i;
	int		j;
	int		len;
	int		y;

	y = 0;
	j = 1;
	uni = (char *)malloc(sizeof(char *) * (compteur(argc, argv, len)));
	uni = *argv;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			uni[y] = argv[j][i];
			i++;
			y++;
		}
		uni[y] = '\n';
		y++;
		j++;
	}
	backslash(uni, y);
	return (uni);
}
