/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:08:47 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/19 15:06:33 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *copy;
	char *str;
	int len;

	len = 0;
	while (src[len])
		len++;
	str = (char*)malloc(sizeof(char) * (len + 1));
	copy = str;
	while (*src)
			*copy++ = *src++;
		*copy = '\0';
		return (str);
	}
