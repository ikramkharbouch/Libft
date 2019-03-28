/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 18:32:17 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/28 19:38:01 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ds;
	unsigned char	*sr;
	size_t			i;

	i = 0;
	ds = dst;
	sr = (void *)src;
	while (i < n)
	{
		if (sr[i] == c)
			return (&ds[i + 1]);
		ds[i] = sr[i];
		i++;
	}
	return (NULL);
}
