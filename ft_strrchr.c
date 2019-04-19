/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 19:14:38 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 17:25:09 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;
	int	index;

	len = ft_strlen(s);
	i = 0;
	index = -1;
	while (i <= len)
	{
		if (s[i] == (char)c)
			index = i;
		i++;
	}
	if (index != -1)
	{
		i = 0;
		while (i <= len)
		{
			if (i == index)
				return ((char *)&s[i]);
			i++;
		}
	}
	return (NULL);
}
