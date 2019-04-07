/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 20:33:44 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 13:08:16 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int s;
	int sign;

	i = 0;
	s = 0;
	sign = 1;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] == '+' || str[i] == '-' || str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		s = s * 10 + str[i] - '0';
		i++;
	}
	return (s * sign);
}
