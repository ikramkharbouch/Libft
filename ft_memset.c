/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 16:46:10 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/26 16:50:21 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_memset(void *str, char c, size_t n)
{
	size_t i;

	i = 0;
	char *s = (char *)str;
	while (i < n)
	{
		s[i] = c;
		i++;

	}
}

int		main()
{
	char str[] = "hello";
	ft_memset(str,'*', 2);
	printf("%s",str);
	return (0);
}
