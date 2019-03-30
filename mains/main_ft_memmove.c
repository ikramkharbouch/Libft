/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 23:16:41 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/29 17:37:23 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char src[50];

	strcpy(src, "abcd");
	memmove(src,  src + 10 , 20);
	ft_memmove(src, src + 10, 20);
	printf("theirs: %s\n", src);
	printf("ours: %s\n", src);
	return (0);
}
