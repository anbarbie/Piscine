/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main18.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 21:28:33 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/15 21:30:27 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int		main(void)
{
	char tab[]= "Hey";
	char tabb[] = "bitch";

	printf("%d", ft_strlcat(tab, tabb, 8));
	return (0);
}
