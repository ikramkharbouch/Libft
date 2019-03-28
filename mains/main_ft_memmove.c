/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 23:16:41 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/28 23:24:18 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char src[50];
	char dest[50];

	strcpy(src, "12345");
	ft_memmove(dest, src, 3);
	dest[3] = '\0';
	printf("%s\n",dest);
	return (0);
}
