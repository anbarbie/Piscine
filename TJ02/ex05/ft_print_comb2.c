/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 17:25:12 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/07 13:19:49 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	result(char a, char b, char c, char d)
{
	if (c > a || (d > b && a == c))
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (a != '9' || b != '8' || c != '9' || d != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	char tab[4];

	tab[0] = '0';
	while (tab[0] <= '9')
	{
		tab[1] = '0';
		while (tab[1] <= '9')
		{
			tab[2] = '0';
			while (tab[2] <= '9')
			{
				tab[3] = '0';
				while (tab[3] <= '9')
				{
					result(tab[0], tab[1], tab[2], tab[3]);
					tab[3]++;
				}
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
