/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 14:49:08 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 13:54:35 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(void)
{

	void	*p;

	p = (char *)malloc(sizeof(char *) * 1);
	printf("|%p|\n", p);
	ft_memdel(&p);
	printf("|%p|\n", p);
	return (0);
}
