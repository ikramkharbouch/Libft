/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 20:12:33 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/06 22:47:16 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	str = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
