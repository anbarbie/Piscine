/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbarbie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:45:18 by anbarbie          #+#    #+#             */
/*   Updated: 2017/08/23 20:54:00 by anbarbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int		main(int argc, char **argv)
{
	argc = argc - 1;
	argc = argc + 1;
	ft_print_words_tables(ft_split_whitespaces(argv[1]));
	return (0);
}
