/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:14:38 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/06 21:51:57 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (s[i])
	{
		if (s[i] == c)
			index = i;
		i++;
	}
	i = 0;
	while (s[i])
	{
		if (i == index)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
