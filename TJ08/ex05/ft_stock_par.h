/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 21:20:02 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/23 14:58:28 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

char	**ft_split_whitespaces(char *str);
void	ft_show_tab(struct s_stock_par *par);
typedef struct s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}			t_stock_par;
#endif
