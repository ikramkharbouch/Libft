/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrwrite.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:17:13 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/03 17:41:46 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_arrwrite(char **arr, int f, int s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < f)
	{
		j = 0;
		while (j < s)
		{
			write(1, &arr[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
