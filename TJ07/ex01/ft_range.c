/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 19:13:02 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/23 21:27:02 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*tab;
	int len;
	int i;


	i = 0;
	len = max - min;
	if (min >= max)
	{
		*tab = 0;
		return (tab);
	}
	tab = (int *)malloc(sizeof(int)*(len + 1));
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
