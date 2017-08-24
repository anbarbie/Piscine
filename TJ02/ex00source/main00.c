/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 09:13:32 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/04 11:51:51 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

int ft_putchar(char c)
{
	write(1, &c,1);
	return (0);
}

void ft_alphaputchar(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{
		ft_putchar(a);
		a++;
	}
}

int main ()
{
	ft_alphaputchar();
return(0);
}

