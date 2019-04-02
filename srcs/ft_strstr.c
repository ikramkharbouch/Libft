/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:07:19 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/02 14:26:26 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	char	*tmp;
	int		i;

	i = 0;
	while(*haystack)
	{
		tmp = haystack;
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
