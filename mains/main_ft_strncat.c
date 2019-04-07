/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:39:34 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/30 15:24:36 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char *src;
	char *dest;
	
	src = (char *)malloc(sizeof(char) * 100);
	dest = (char *)malloc(sizeof(char) * 100);
	ft_strcpy(src, "test");
	ft_strcpy(dest, "1337");
	//printf("|%s|\n", strncat(dest, src, 3));
	printf("|%s|\n", ft_strncat(dest, src, 3));
	return (0);
}
