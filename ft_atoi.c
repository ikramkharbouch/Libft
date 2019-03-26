/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 21:27:19 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/26 21:37:57 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	int q;
	int sign;
	q = 0;
	i = 0;
	sign = 1;
	if (str[0] == -1)
	{
		sign = -1;
		i++;
	}
	if (str[i] == ' ' || str[i] == '\n' || str[i] == '+')
		i++;
	if(str[i] == '-' || str[i]  == '\t')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		q = q * 10 + str[i] - '0';
		i++;
	}
	return (q * sign);
}

int		main()
{
	char str[] = "9999";
	printf("%d\n",ft_atoi(str));
	return (0);
}
