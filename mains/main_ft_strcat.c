/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 12:45:54 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/29 14:07:49 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char *str;
	char *dest;

	dest = (char *)malloc(sizeof(char) * 7);
	str = (char *)malloc(sizeof(char) * 7);
	ft_strcpy(str, "hello");
	ft_strcpy(dest, "test");
	//printf("%s\n", ft_strcat(dest, str));
	printf("%s\n", strcat(dest, str));
	return (0);
}
