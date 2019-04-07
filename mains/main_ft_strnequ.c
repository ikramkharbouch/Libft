/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnequ.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:54:05 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/02 15:54:06 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/libft.h"

int         main(void)
{
    char    p1[50];
    char    p2[50];

    ft_strcpy(p1, "1234");
    ft_strcpy(p2, "1234");
    printf("%d\n", ft_strnequ(p1, p2, 2));
    printf("%d\n", ft_strncmp(p1, p2, 2));
    return (0);
}
