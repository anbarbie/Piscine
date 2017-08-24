/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 16:40:13 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/18 16:40:29 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		first(char *str, int i)
{
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
		i++;
	}
	return(i);
}


char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = first(str, i);
		while (str[i] < 48 || (str[i] < 48 && str[i] > 57) || 
				(str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			i++;
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				i++;
			}
	else if (str[i] >= 65 && str[i] <= 90)
		i++;
		}
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
