/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:41:39 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/14 19:57:32 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char table[] = "cestungroprobleme";
	char table2[] = "cestpasunprobleme";
	ft_strcpy(table, table2);
	printf("%s", table);
	printf("%s", table2);
	return (0);
}
