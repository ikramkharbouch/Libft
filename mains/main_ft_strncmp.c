/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 20:22:13 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/08 18:44:45 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(void)
{
	char s1[50];
	char s2[50];

	ft_strcpy(s1, "\200");
	ft_strcpy(s2, "");
	printf("|%d|\n", ft_strncmp(s1, s2, 1));
	printf("|%d|\n", strncmp(s1, s2, 1));
	return (0);
}
