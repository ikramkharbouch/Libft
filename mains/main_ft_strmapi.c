/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strmapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:40:54 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/02 14:48:50 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char        strone(unsigned int i, char c)
{
    if (i == 0)
        c = '1';
    return (c);
}

int         main(void)
{
    char    p[50];

    ft_strcpy(p, "abcdef");
    printf("|%s|\n", p);
    printf("|%s|\n", ft_strmapi(p, &strone));
    return (0);
}
