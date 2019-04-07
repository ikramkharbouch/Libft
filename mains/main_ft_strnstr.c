/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 22:24:12 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 22:39:18 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	main(void)
{
	char *res1;
	char *res2;

	/*
	res1 = strnstr("see FF your FF return FF now FF", "FF", 31);
	res2 = ft_strnstr("see FF your FF return FF now FF", "FF", 31);

	if (res1 == res2)
		printf("OK\n");
	else
		printf("KO\n");
	*/

	res1 = strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9);
	res2 = ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", 9);

	if (res1 == res2)
		printf("OK\n");
	else
		printf("KO\n");
	return (0);
}
