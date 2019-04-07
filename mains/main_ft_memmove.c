/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 23:16:41 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/06 20:35:38 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char src1[50];
	char src2[50];

	strcpy(src1, "1234");
	strcpy(src2, "1234");
	memmove(src1 + 1,  src1 + 3, 1);
	ft_memmove(src2 + 1,  src2 + 3, 1);
	printf("theirs: |%s|\n", src1);
	printf("ours: |%s|\n", src2);
	return (0);
}
