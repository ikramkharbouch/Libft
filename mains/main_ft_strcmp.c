/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 20:12:15 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/08 13:55:10 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(void)
{
	char s1[50];
	char s2[50];

	ft_strcpy(s1, "12345");
	ft_strcpy(s2, "12345");
	printf("|%d|\n", ft_strcmp(s1, s2));
	printf("|%d|\n", strcmp(s1, s2));
	return (0);
}
