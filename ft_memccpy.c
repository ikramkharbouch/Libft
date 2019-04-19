/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 18:32:17 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 15:59:39 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	ds = dst;
	sr = (void *)src;
	i = 0;
	while (i < n)
	{
		ds[i] = sr[i];
		if (sr[i] == (unsigned char)c)
			return (&ds[i + 1]);
		i++;
	}
	return (NULL);
}
