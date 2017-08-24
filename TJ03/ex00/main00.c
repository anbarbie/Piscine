/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:26:53 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/08 13:17:44 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c);

void ft_ft(int *nbr);

int		 main (void)
{
	int a;

	a = 50;
	printf("%d\n",a);
	ft_ft(&a);
	printf("%d\n",a);
	return (0);
}
