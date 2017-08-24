/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 21:20:02 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/23 17:13:12 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
#include <unistd.h>
void	ft_putchar(char c);
typedef struct s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}			t_stock_par;
t_stock_par *ft_param_to_tab(int ac, char **av);
char	**ft_split_whitespaces(char *str);
#endif
