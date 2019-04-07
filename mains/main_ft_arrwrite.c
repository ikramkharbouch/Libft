/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_arrwrite.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 17:25:57 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/03 19:46:29 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main()
{
	char **names;

	names = (char **)malloc(sizeof(char *) * 3);
	names[0] = "abc";
	names[1] = "bcg";
	ft_arrwrite(names, 2, 3);
	return (0);
}
