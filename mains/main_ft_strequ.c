/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strequ.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:54:00 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/02 15:54:02 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/libft.h"

int         main(void)
{
    char    p1[50];
    char    p2[50];

    ft_strcpy(p1, "1234");
    ft_strcpy(p2, "1234");
    printf("%d\n", ft_strequ(p1, p2));
    printf("%d\n", ft_strcmp(p1, p2));
    return (0);
}
