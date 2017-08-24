/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 20:40:39 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/23 21:41:09 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;
	int *tab;

	i = 0;
	len = max - min;
	range = &tab;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int)*(len + 1));
	while (i < (max - min))
	{
		tab[i] = min + 1;
		i++;
	}
	tab[i] = '\0';
	return (i);
}
