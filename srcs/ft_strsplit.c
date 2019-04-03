/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:20:27 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/03 17:44:33 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	char	*tmp;
	int		i;
	int		j;

	arr = (char **)malloc(sizeof(char *) * (ft_count_words(s) + 1));
	tmp = ft_strtrim(s);
	i = 0;
	while (*tmp)
	{
		j = 0;
		while (!ft_is_whitespace(*tmp))
		{
			arr[i][j] = *tmp;
			j++;
			tmp++;
		}
		if (j)
			i++;
		tmp++;
	}
	free(tmp);
	return (arr);
}
