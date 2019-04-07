/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 14:49:02 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/02 15:46:54 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(void)
{
	printf("|%s|\n", ft_strjoin("234", "123"));
	printf("|%s|\n", ft_strjoin("", "123"));
	printf("|%s|\n", ft_strjoin("234", ""));
	printf("|%s|\n", ft_strjoin("", ""));
	printf("|%s|\n", ft_strjoin("234-1", "123"));
	printf("|%s|\n", ft_strjoin("234-1   ", "123   "));
	printf("|%s|\n", ft_strjoin(" ", " "));
	return (0);
}
