/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 15:38:16 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/08 15:56:25 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main (void)
{
	int a;
	int b;

	a = 90;
	b = 86;

ft_ultimate_div_mod(&a, &b);
printf("%d %d", a, b);
return (0);
}
