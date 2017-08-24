/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 20:47:58 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/23 18:26:26 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char  *ft_strdup(char *src)
{
	char *copy;
	char *str;
	int len;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(char) * (len + 1));
	copy = str;
	while (*src)
		*copy++ = *src++;
	*copy = '\0';
	return (str);
}

t_stock_par *ft_param_to_tab(int ac, char **av)
{
	int i;
	int j;
	t_stock_par *tab_struct;

	tab_struct = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac));
	i = 0;
	j = 0;
	while (i < ac)
	{
		tab_struct[i].size_param = ac;
		tab_struct[i].str = av[i];
		tab_struct[i].copy = (char *)malloc(sizeof(char) * (ft_strlen(av[i])));
		while (j < ft_strlen(av[i]))
		{
			tab_struct[i].copy[j] = av[i][j];
			j++;
		}
		tab_struct[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	tab_struct[i].tab = NULL;
	return (tab_struct);
}
