/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 20:33:44 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 21:03:14 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int			i;
	__int128_t	s;
	__int128_t	sign;

	i = 0;
	s = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == '\n')
		i++;
	sign = str[i] == '-' ? -1 : 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		s = s * 10 + str[i] - '0';
		i++;
	}
	if (s * sign >= (__int128_t)9223372036854775807LL)
		return ((int)9223372036854775807LL);
	if (s * sign < (__int128_t)(-9223372036854775807LL))
		return (0);
	return ((int)(s * sign));
}
