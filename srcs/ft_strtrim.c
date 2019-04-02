/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:58:04 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/02 18:15:01 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int					is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char				*ft_strtrim(char const *s)
{
	char const		*tmp;
	unsigned int	start;
	size_t			len;

	if (!s)
		return (ft_strnew(0));
	tmp = s;
	start = 0;
	while (is_whitespace(*s))
	{
		start++;
		s++;
	}
	while (*s)
		s++;
	s--;
	while (is_whitespace(*s))
		s--;
	len = s - start - tmp + 1;
	return (ft_strsub(tmp, start, len));
}
