/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 20:02:38 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/09 14:27:45 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sterlen(char *str);

int main (void)
{
	int i;
	
	i = ft_sterlen("bonjour");
	printf("%d", i);
	return (0);
}
