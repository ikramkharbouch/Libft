/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 22:02:27 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/06 20:47:49 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * len);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	ft_memdel((void *)&tmp);
	return (dst);
}
