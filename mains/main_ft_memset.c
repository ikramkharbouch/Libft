/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 13:36:52 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/06 17:11:35 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"

void	set_color(char *s)
{
	printf("%s", s);
}

void	reset_color()
{
	printf("%s", "\033[0m");
}

void	test(char *src, char c, size_t len)
{
	char		*src1;
	char		*src2;
	int			res;
	static int	i = 1;

	if (i == 1)
	{
		set_color(GREEN);
		printf("---------- MEMSET TESTS ----------\n");
		reset_color();
	}

	src1 = ft_strdup(src);
	src2 = ft_strdup(src);

	res = ft_memcmp(memset(src1, c, len), ft_memset(src2, c, len), len);

	set_color(RED);
	printf("(%d)", i++);
	reset_color();
	printf(" |%s| <> |%s| => ", src1, src2);
	if (res == 0)
	{
		set_color(GREEN);
		printf("1");
		reset_color();
	}
	else
	{
		set_color(RED);
		printf("0");
		reset_color();
	}
	printf("\n");
}

int	main(void)
{
	test("hello", '*', 1);
	test("hello", '|', 2);
	test("hello", ',', 3);
	test("hello", 'O', 4);
	test("hello", ' ', 5);
	return (0);
}
