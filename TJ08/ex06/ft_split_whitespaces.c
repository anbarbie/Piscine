/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 20:53:03 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/22 16:06:10 by bmathias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		cptwords(char *str)
{
	int i;
	int mot;

	i = 0;
	mot = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ' && str[i] && str[i] != '\n' && str[i] != '\t')
		{
			i++;
			if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n' ||
					str[i] == '\t')
			{
				mot += 1;
			}
		}
		while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' ||
					str[i] == '\t'))
			i++;
	}
	return (mot);
}

void	cptlettres(char *str, char **tab)
{
	int i;
	int lettre;
	int cpt;

	cpt = 0;
	i = 0;
	lettre = 0;
	while (str[i] != '\0')
	{
		while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			i++;
			lettre++;
			if (!(str[i]) || str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
			{
				tab[cpt] = (char *)malloc(sizeof(char) * (lettre + 1));
				cpt++;
				lettre = 0;
			}
		}
		while (str[i] && (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'))
			i++;
	}
	tab[cpt] = 0;
}

void	assign(char *str, char **tab)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	x = 0;
	while (str[x] != '\0')
	{
		while (str[x] && str[x] != ' ' && str[x] != '\n' && str[x] != '\t')
		{
			tab[j][i] = str[x];
			i++;
			x++;
			if (!(str[x]) || str[x] == '\n' || str[x] == ' ' || str[x] == '\t')
			{
				tab[j][i] = '\0';
				i = 0;
				j++;
			}
		}
		while (str[x] && (str[x] == ' ' || str[x] == '\t' || str[x] == '\n'))
			x++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	char **tab;

	if (!str || cptwords(str) == 0)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (cptwords(str) + 1));
	cptlettres(str, tab);
	assign(str, tab);
	return (tab);
}
