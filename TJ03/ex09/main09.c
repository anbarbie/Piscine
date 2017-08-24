/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:43:54 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/11 15:53:58 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size);

int		main(void)
{
	int size = 5;
	int tab[size];

	tab [0] = 9;
	tab [1] = 8;
	tab [2] = 5;
	tab [3] = 3;
	tab [4] = 2;
	ft_sort_integer_table(tab, 5);
	printf("%d",tab[0]);
	printf("%d",tab[1]);
	printf("%d",tab[2]);
	printf("%d",tab[3]);
	printf("%d",tab[4]);
	return (0);
}
