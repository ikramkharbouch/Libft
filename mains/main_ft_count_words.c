/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_count_words.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:53:57 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/02 22:40:10 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		main(void)
{
	printf("%d\n", ft_count_words("    azer       azer     "));
	printf("%d\n", ft_count_words("       abcd efj        nnn      "));
	printf("%d\n", ft_count_words(""));
	printf("%d\n", ft_count_words("ijniuj"));
	printf("%d\n", ft_count_words("   ijniuj"));
	printf("%d\n", ft_count_words("ijniuj  \n		"));
	printf("%d\n", ft_count_words("i"));
	printf("%d\n", ft_count_words("er;obtj  uth20980gicuHR OAEIVUGHP OIJSKJNVLSJFH KWIH VFB oijojoi	"));
	return (0);

}
