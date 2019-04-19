/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:58:04 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/08 14:46:37 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strtrim(char const *s)
{
	char const		*tmp;
	unsigned int	start;
	size_t			len;

	tmp = s;
	start = 0;
	while (ft_is_whitespace(*s))
	{
		start++;
		s++;
	}
	if (!*s)
		return (ft_strnew(0));
	while (*s)
		s++;
	s--;
	while (ft_is_whitespace(*s))
		s--;
	len = s - start - tmp + 1;
	return (ft_strsub(tmp, start, len));
}
