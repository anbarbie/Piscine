/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main16.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 20:02:58 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/15 20:36:06 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char tab[] = "hey";
	char tab2[] = ", bitch";

	printf("%s", ft_strcat(tab, tab2));
	return (0);
}
