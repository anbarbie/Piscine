/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 13:47:32 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/04 16:52:55 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar (char c);

	int ft_putchar (char c)
{
	write (1,&c,1);
		return (0);
}

void ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar ('N');
	}
	else 
	{ 
		ft_putchar ('P');
	}
}

int main ()
{
	ft_is_negative(5);
	return (0);
}
 
