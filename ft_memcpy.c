/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 18:03:36 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/26 18:26:34 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	char *dst = (char *)dest;
	char *srcc = (char *)src;
	size_t i;

	i = 0;
	while (i < n)
	{
		dst[i] = srcc[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		main()
{
	char dest[]= "jLo";
	char src[]="having a JLO";
	ft_memcpy(dest,src,10);
	printf("%s",dest);
	return (0);
}
