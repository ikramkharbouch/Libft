/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strclr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 18:40:45 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/31 18:49:49 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			main(void)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * 5);
	ft_strcpy(p, "12345");
	printf("|%s|\n", p);
	ft_strclr(p);
	printf("|%s|\n", p);
	return (0);
}


