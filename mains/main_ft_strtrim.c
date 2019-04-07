/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 15:54:22 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/06 23:58:27 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		 main(void)
{
	printf("|%s|\n", ft_strtrim(""));
    printf("|%s|\n", ft_strtrim("abcd"));
    printf("|%s|\n", ft_strtrim("    abcd"));
    printf("|%s|\n", ft_strtrim("abcd   "));
    printf("|%s|\n", ft_strtrim("a    b c d   "));
    printf("|%s|\n", ft_strtrim("         a    b c d    "));
    printf("|%s|\n", ft_strtrim("\n  	       a    b c d    "));
    return (0);  
}
