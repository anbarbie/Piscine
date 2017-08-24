/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 18:02:35 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/20 15:09:39 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_concat_params(char argc, char **argv);

int		main(int argc, char **argv)
{
	char *tab;

	tab = ft_concat_params(argc, argv);
	printf("%s", tab);
	return (0);
}
