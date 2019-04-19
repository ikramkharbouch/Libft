/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:34:18 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/04 15:29:37 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_array(char **array, int debug)
{
	int	i;

	i = 0;
	while (array[i])
	{
		if (debug)
			ft_putchar('|');
		ft_putstr(array[i++]);
		if (debug)
			ft_putchar('|');
		ft_putchar('\n');
	}
}
