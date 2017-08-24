/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main14.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 19:22:48 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/15 19:28:09 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char tab[] = "DDdasdSVAA";

	printf("%d", ft_str_is_uppercase(tab));
	return (0);
}

