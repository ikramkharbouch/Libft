/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:58:06 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 13:42:13 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*next_word(char *str, char c)
{
	while (*str && *str == c)
		str++;
	return (str);
}

int				ft_count_words(char const *str, char c)
{
	int			count;

	count = 0;
	while (*str)
	{
		str = next_word((char *)str, c);
		if (*str)
		{
			while (*str && *str != c)
				str++;
			count++;
		}
	}
	return (count);
}
