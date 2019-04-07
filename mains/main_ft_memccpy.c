/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 18:42:23 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 16:02:38 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char 	src[] = "12345";
	char 	dst[10];

	ft_bzero(dst, 10);
	ft_memset(dst, '*', 9);
	printf("res: |%s| |%s|\n", dst, ft_memccpy(dst, src, '2', 3));
	printf("|%s|\n", ft_memccpy(dst, src, '0', 0));
	printf("|%s|\n", ft_memccpy(dst, src, '1', 6));
	printf("|%s|\n", ft_memccpy(dst, src, '1', 5));
	printf("|%s|\n", ft_memccpy(dst, src, '6', 5));
	return (0);
}
