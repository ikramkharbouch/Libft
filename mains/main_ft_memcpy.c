/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 16:44:38 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/06 17:18:25 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	main(void)
{
	char original[50];
	char new[50];
	
	strcpy(original, "12345");
	ft_memcpy(new, original, 3);
	new[3] = '\0';
	printf("%s\n", new);
	return (0);
}
