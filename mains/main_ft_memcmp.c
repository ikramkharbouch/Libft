/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:50:41 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/29 10:03:14 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
   	char *str;
	char *str1;

	str = "hello";
	str1 = "aello";
	printf("%d\n", memcmp(str, str1, 10));
	printf("%d\n", ft_memcmp(str, str1, 10));
	return (0);
}
