/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 18:28:29 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/23 20:38:18 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char **ft_split_whitespaces(char *str);

int		main(int argc, char **argv)
{
	char **tab;
	int i;

	if(argc != 2)
		return(0);
	i = -1;
	if ((tab = ft_split_whitespaces(argv[1])))
		while (tab[++i] != '\0')
			printf("%s\n", tab[i]);
	return (0);
}
