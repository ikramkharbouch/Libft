/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_digits_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:50:41 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 13:26:21 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_find_digits_len(int n)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
