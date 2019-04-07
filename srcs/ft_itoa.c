/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:52:54 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 14:14:09 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		negative;
	int		len;
	int		tmp;
	int		i;

	negative = n < 0 ? 1 : 0;
	len = ft_find_digits_len(n) + negative;
	str = ft_strnew(len + negative);
	i = 0;
	if (negative)
	{
		str[i++] = '-';
		n = -n;
	}
	tmp = len - 1 - negative;
	while (i < len && tmp >= 0)
	{
		str[i++] = (n / ft_power(10, tmp)) + '0';
		n = n % ft_power(10, tmp--);
	}
	str[len] = '\0';
	return (str);
}
