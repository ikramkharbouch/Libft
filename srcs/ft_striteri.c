/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:10:19 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/31 20:08:13 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void				ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int				i;
	unsigned int	length;

	i = 0;
	length = ft_strlen(s);
	while (s[i])
	{
		(*f)(length, &s[i]);
		i++;
	}
}
