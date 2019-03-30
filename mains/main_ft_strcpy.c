/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 11:17:06 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/30 15:16:23 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char *str;
	char dest[50];

	str = "hello";
	printf("|%s|\n",ft_strcpy(dest, str));
	printf("|%s|\n",strcpy(dest, str));
	return (0);
}
