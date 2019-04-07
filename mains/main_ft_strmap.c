/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strmap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 21:07:26 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/02 14:39:39 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	strlow(char c)
{
	if (c >= 'a' && c <= 'z')
		c = '1';
	return (c);
}

int		main(void)
{
	printf("|%s|\n", ft_strmap("aBCD", &strlow));
	return (0);
}
