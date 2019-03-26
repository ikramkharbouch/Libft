/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 20:07:15 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/26 20:39:27 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void 	ft_memccpy( void* dest, const void *src, int c, size_t cnt)
{
	char *dst = (char *)dest;
	char *srcc = (char *)src;
	size_t i;
	size_t t;

	i = 0;
	t = c;
	while (i < cnt)
	{
		if(i == t)
			break;
		else
			dst[i] = srcc[i];
		i++;
	}
}

int		main()
{
	char str[] = "This is the string: not copied";
	char buff[50];
	memset(buff,'\0',50);
	ft_memccpy(buff,str,':',50);
	printf("%s",buff);
	return (0);
}

