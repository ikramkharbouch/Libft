/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 11:55:25 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/31 18:27:38 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memalloc(size_t size)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) * size)))
		return (NULL);
	tmp[size] = 0;
	return (tmp);
}
