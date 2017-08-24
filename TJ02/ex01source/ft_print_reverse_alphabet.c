/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_print_reverse_alphabet.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 12:00:47 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/04 12:27:06 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar (char c);

int ft_putchar (char c)
{
	write (1, &c,1);
		return (0);
}

void ft_print_reverse_alphabet (void)
{
	int z;
	z=122;
	while (z >= 97)
	{
		ft_putchar (z);
		z--;
	}
}

int main ()
{
	ft_print_reverse_alphabet ();
	return (0);
}
