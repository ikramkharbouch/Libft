/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memalloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 12:01:01 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/31 14:48:16 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int			main(void)
{
	char	*s;
//	char	*p;

	s = ft_memalloc(999999999999999);
	//p = malloc(sizeof(char) * );
	//ft_strcpy(s, "12345");
	printf("|%s|\n", s);
	//printf("|%s|\n", p);
	return (0);
}
