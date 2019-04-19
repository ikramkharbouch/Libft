/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 16:39:40 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/06 20:47:32 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	i = 0;
	ds = dst;
	sr = (void *)src;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (ds);
}
