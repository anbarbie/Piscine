/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 17:44:11 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/19 14:08:08 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_find_next_prime(int nb);

int		main(void)
{
	int i;
	int y;

	i = 3;
	y = i;
	while(i < y + 200)
	{
		printf("%d ", ft_find_next_prime(i));
		i = i + 2;
	}
	return (0);
}
