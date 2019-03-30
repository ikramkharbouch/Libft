/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 11:54:07 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/29 14:06:38 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	len1;
	size_t	i;

	i = 0;
	len1 = ft_strlen(s1);
	i = 0;
	while (s2[i])
	{
		s1[len1 + i] = s2[i];
		i++;
	}
	s1[len1 + i] = '\0';
	free((void *)s2);
	return (s1);
}
