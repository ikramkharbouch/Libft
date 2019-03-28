/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 22:02:27 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/28 23:25:42 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ds;
	unsigned char	temp[len];
	unsigned char	*sr;
	size_t			i;

	i = 0;
	ds = dst;
	sr = (void *)src;
	while (i < len)
	{
		temp[i] = sr[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		ds[i] = temp[i];
		i++;
	}
	return (ds);
}
