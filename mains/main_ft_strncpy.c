/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 11:37:44 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/30 15:17:21 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char *src;
	char dest[100];

	src = "12345";
	printf("|%s|\n", ft_strncpy(dest, src, 2));
	printf("|%s|\n", strncpy(dest, src, 2));
	return (0);
}
