/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 18:58:36 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/13 19:28:10 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int tmp;
	char *tab;

	tab = str;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	while (tab[j] < tab[i])
	{
		tmp = tab[j];
		tab[j] = tab[i];
		tab[i] = tmp;
		j++;
		i--;
	}
	*str = *tab;
	return (str);
}
