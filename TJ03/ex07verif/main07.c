/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 19:16:00 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/13 19:17:30 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

int		main(void)
{
	char *tab = "hello";
	tab = ft_strrev(tab);
	printf("%s", tab);
	return (0);
}
