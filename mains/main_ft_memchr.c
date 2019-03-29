/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 23:41:46 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/29 09:35:06 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char string[] = "12345";
	printf("%s\n",(char *)memchr(string, '0', 5));
	printf("%s\n",(char *)ft_memchr(string, '0', 5));
	return (0);
}
