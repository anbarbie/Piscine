/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 20:37:22 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/15 21:26:38 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	int nb = 3;
	char tab[] = "Hey";
	char tab2[] = "hoewareyou";

	printf("%s", ft_strncat(tab, tab2, nb));
	return (0);
}
