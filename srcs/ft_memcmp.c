/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:42:21 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/29 10:07:55 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t		i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str1 && *str2 && *str1 == *str2 && i < n)
	{
		str1++;
		str2++;
		i++;
	}
	return (*str1 - *str2);
}
