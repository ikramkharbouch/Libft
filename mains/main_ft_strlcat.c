/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:41:37 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/03/29 16:39:43 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

#define DST_SIZE 10
#define SRC_SIZE 5

int		main()
{
	char 	*src1;
	char 	*src2;
	char 	*dest1;
	char 	*dest2;
	size_t	n1;
	size_t	n2;

	src1 = (char *)malloc(sizeof(char) * SRC_SIZE);
	src2 = (char *)malloc(sizeof(char) * SRC_SIZE);
	dest1 = (char *)malloc(sizeof(char) * DST_SIZE);
	dest2 = (char *)malloc(sizeof(char) * DST_SIZE);
	
	ft_strcpy(src1, "test");
	ft_strcpy(src2, "test");
	ft_strcpy(dest1, "1234"); 
	ft_strcpy(dest2, "1234"); 
	
	n1 = ft_strlcat(dest1, src1, DST_SIZE);
	n2 = strlcat(dest2, src2, DST_SIZE);

	printf("ret: %zu, realloc: %zu, dest: |%s|\n", n1, n1 - DST_SIZE, dest1);
	printf("ret: %zu, realloc: %zu, dest: |%s|\n", n2, n2 - DST_SIZE, dest2);

	return (0);
}
