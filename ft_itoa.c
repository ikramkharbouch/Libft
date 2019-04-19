/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:52:54 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/08 16:22:08 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	v;
	int		negative;
	int		len;

	v = n;
	negative = v < 0 ? 1 : 0;
	len = ft_find_digits_len(v) + negative;
	if (!(str = ft_strnew(len)))
		return (NULL);
	if (negative)
	{
		str[0] = '-';
		v = -v;
	}
	str[len] = '\0';
	while (len-- - negative)
	{
		str[len] = (v % 10) + '0';
		v /= 10;
	}
	return (str);
}
