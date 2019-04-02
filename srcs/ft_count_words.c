/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:58:06 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/02 22:37:38 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strltrim(char *str)
{
	while (ft_is_whitespace(*str))
		str++;
	return (str);
}

int			ft_count_words(char *str)
{
	int		count;

	count = 0;
	while (*str)
	{
		str = ft_strltrim(str);
		if (*str)
		{
			while (*str && !ft_is_whitespace(*str))
				str++;
			count++;
		}
	}
	return (count);
}
