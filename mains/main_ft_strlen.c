/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 10:20:27 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/29 10:25:39 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char *s;

	s = "12345";
	printf("%zu\n", ft_strlen(s));
	printf("%zu\n", strlen(s));
	return (0);
}
