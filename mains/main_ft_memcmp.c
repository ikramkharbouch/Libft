/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:50:41 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 16:31:35 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	test(char *s1, char *s2, size_t n)
{
	int	n1;
	int	n2;

	n1 = memcmp(s1, s2, n);
	n2 = ft_memcmp(s1, s2, n);

	// printf("\t%d <> %d\n", n1, n2);

	return (n1 == n2);
}

int	main()
{
	printf("%d\n", test("1234", "1234", 4));
	printf("%d\n", test("", "", 0));
	printf("%d\n", test("iuhoi", "hipuh", 28));
	printf("%d\n", test("f\0", "f\0", 12));
	printf("%d\n", test("1234", "1235", 5));
	printf("%d\n", test("", "\0", 1));
	printf("%d\n", test("", "\0", 2));
	return (0);
}
