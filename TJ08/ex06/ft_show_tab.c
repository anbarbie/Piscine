/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 14:59:10 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/23 19:00:41 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

t_stock_par *ft_param_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int div;

	div = 1;
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	while (nb / div >= 10)
		div = div * 10;
	while (div > 0)
	{
		ft_putchar((nb / div) % 10 + '0');
		div = div / 10;
	}
}

void	ft_show_tab(t_stock_par *par)
{
	while (par->str != '\0')
	{
		ft_putstr(par->copy);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		while(par -> tab)
		{
			ft_putstr(*par->tab);
			ft_putchar('\n');
			par -> tab++;
		}
		par++;
	}
}

int		main(int ac, char **av)
{
	ft_show_tab(ft_param_to_tab(ac, av));
	return(0);
}
