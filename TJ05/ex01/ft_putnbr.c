/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 12:13:35 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/14 13:03:40 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int div;

	div = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	while (nb / div >= 10)
	{
		div = div * 10;
	}
	while (div > 0)
	{
		ft_putchar((nb/div) % 10 + '0');
		div = div/10;
	}
}
