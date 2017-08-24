/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 18:39:17 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/15 19:18:28 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char tab[] = "asAavafsa";

	printf("%d", ft_str_is_lowercase(tab));
	return (0);
}
