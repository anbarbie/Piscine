/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 16:35:01 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/17 13:11:52 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int x;
	int i;

	i = 0;
	x = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (x <= nb)
	{
		i++;
		x = i*i;
		if (x == nb)
			return (i);
	}
	return (0);
}
