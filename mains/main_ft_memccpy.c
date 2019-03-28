/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 18:42:23 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/28 19:37:46 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char 	src[] = "12345";
	char 	dst[10];
	char	*result;

	ft_bzero(dst, 10);
	ft_memset(dst, '*', 9);
	result = ft_memccpy(dst, src, '3', 5);
	printf("|%s|\n", result);
	return (0);
}
