/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:48:22 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/04 15:56:00 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_del_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		ft_strdel(&array[i++]);
	return (NULL);
}
