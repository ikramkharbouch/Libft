/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:07:19 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/09 14:17:07 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	char	*tmp;
	size_t	i;

	if (needle && !(needle[0]))
		return ((char *)haystack);
	while (*haystack)
	{
		tmp = (char *)haystack;
		i = 0;
		while (*haystack == needle[i] && needle[i])
		{
			haystack++;
			i++;
		}
		if (!(needle[i]))
			return (tmp);
		haystack = tmp + 1;
	}
	return (NULL);
}
