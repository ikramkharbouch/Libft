/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_striteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:39:29 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/31 21:12:02 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_strcap(unsigned int length, char *s)
{
	int i;

	(void)length;
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
}

int		main(void)
{
	char p[50];

	ft_strcpy(p, "abcdef");
	printf("|%s|\n", p);
	ft_striteri(p, &ft_strcap);
	printf("|%s|\n", p);
	return (0);
}

