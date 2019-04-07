/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:03:57 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 20:21:22 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int     main(void)
{
     printf("strstr = |%s|\n", strstr("MZIRIBMZIRIBMZP", "MZIRIBMZP"));
     printf("ft_strstr = |%s|\n", ft_strstr("MZIRIBMZIRIBMZP", "MZIRIBMZP"));
     printf("strstr = |%s|\n", strstr("", ""));
	 printf("ft_strstr = |%s|\n", ft_strstr("", ""));
     printf("strstr = |%s|\n", strstr("abcd", ""));
	 printf("ft_strstr = |%s|\n", ft_strstr("abcd", ""));
	 return (0);
}
