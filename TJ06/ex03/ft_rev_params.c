/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 15:08:50 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/16 15:42:28 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

int		main(int argc, char **argv)
{
	int col;
	int lin;

	col = 0;
	lin = argc - 1;
	while (lin > 0)
	{
		col = 0;
		while (argv[lin][col] != '\0')
		{
			ft_putchar(argv[lin][col]);
			col++;
		}
		ft_putchar('\n');
		lin--;
	}
}
