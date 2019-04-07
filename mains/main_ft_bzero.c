/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 14:11:46 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/28 16:20:33 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"


int		main()
{
	unsigned char str[]="hello";
	unsigned char str1[] = "kill";
	ft_bzero(str,2);
	printf("our function output: %s",str);
	bzero(str1,2);
	printf("the original function output: %s",str1);
	return (0);
}
