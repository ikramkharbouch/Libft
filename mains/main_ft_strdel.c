/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 18:25:11 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/31 18:35:36 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(void)
{
	char *p;

	p = (char *)malloc(sizeof(char) * 5);
	printf("|%p|\n", p);
	ft_strdel(&p);
	printf("|%p|\n", p);
	return (0);
}
