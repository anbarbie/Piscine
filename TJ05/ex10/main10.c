/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:40:41 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/17 21:21:46 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char tab[]= "salut, comment tu vas ? 42mots quarant-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(tab));
	return (0);
}
