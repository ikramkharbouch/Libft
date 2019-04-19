/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:20:27 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/08 14:47:04 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*next_word(char *str, char c)
{
	while (*str && *str == c)
		str++;
	return (str);
}

static int	word_length(char *str, char c)
{
	int		len;

	len = 0;
	while (*str && *str != c)
	{
		len++;
		str++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**result;
	int		words;
	int		length;
	int		i;

	words = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		s = next_word((char *)s, c);
		length = word_length((char *)s, c);
		result[i] = ft_strsub(s, 0, length);
		if (!result[i])
			return (ft_del_array(result));
		s += length;
		i++;
	}
	result[i] = NULL;
	return (result);
}
