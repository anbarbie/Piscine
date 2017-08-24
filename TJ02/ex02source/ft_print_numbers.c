/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 12:57:47 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/04 13:14:58 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar (char c);

int ft_putchar (char c)
{
	write (1,&c,1);
		return (0);
}

void ft_print_numbers (void)
{
	int i;
	i=48;
	while (i<=57)
	{
		ft_putchar (i);
		i++;
	}
}

int main ()
{
	ft_print_numbers();
	return (0);
}

