/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 14:37:35 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/17 17:40:28 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int resultat;

	i = 0;
	if (power < 0)
		return (0);
	resultat = 1;
	while (i < power)
	{
		i++;
		resultat *= nb;
	}
	return (resultat);
}
