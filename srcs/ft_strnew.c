/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 14:53:27 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/31 15:55:10 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (char *)malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	else
		str[size] = '\0';
	return (str);
}
