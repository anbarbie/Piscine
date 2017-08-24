/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 14:12:09 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/08 15:05:13 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int tmpdiv;
	int tmpmod;

	tmpdiv = a / b;
	tmpmod = a % b;
	*div = tmpdiv;
	*mod = tmpmod;
}
