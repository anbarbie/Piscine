/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 20:47:58 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/23 13:53:38 by anbarbie         ###   ########.fr       */
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
	return (tab_struct);
}
