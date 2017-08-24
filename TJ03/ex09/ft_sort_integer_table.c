/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 14:43:10 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/11 15:53:16 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int x;
	int y;
	int tmp;

	size = size - 1;
	y = 0;
	while (y <= size)
	{
		x = 0;
		while (x < size)
		{
			if (tab[x] > tab[x + 1])
			{
				tmp = tab[x];
				tab [x] = tab [x + 1];
				tab [x + 1] = tmp;
			}
			x++;
		}
		y++;
	}
}
