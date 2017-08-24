/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 16:24:59 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/18 16:16:39 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char tab2[] = "succulent";
	char tab[] = "les_amies";
	ft_strncpy(tab, tab2, 3);
	printf("%s\n", tab2);
	printf("%s\n", tab);
	return (0);
}
