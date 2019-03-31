/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_striter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:02:49 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/31 19:39:24 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(void)
{
	char *p;

	p = ft_strnew(5);
	ft_strcpy(p, "12345");
	printf("|%s|\n", p);
	ft_striter(p, &ft_strclr);
	printf("|%s|\n", p);
	return (0);
}

