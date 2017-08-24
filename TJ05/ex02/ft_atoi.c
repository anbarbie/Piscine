/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 13:07:14 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/18 15:30:39 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int sign;
	int i;
	int res;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\f'
 || str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + *(str +i) - 48;
		i++;
	}
	return (sign * res);
}
