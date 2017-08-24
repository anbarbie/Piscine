/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 14:42:49 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/15 15:25:07 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char *p1;
	char *p2;
	unsigned int i;

	p1 = "aa";
	p2 = "aabab";
	i = 4;
	printf("%d", strncmp (p1, p2, i));
}
