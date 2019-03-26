/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 16:58:41 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/26 17:34:12 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, int nbyte)
{
	char *str = (char *)s; //the cast
	int i;

	i = 0;
	while (i < nbyte)
	{
		str[i] = 0;
		i++;
	}
}
int		main()
{
	char str[] = "aello";
	ft_bzero(str,0);
	printf("%s",str);
	return (0);
}
