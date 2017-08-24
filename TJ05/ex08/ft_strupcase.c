/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 15:26:20 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/15 17:02:52 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		while (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			i++;
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}
