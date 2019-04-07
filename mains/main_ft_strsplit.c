/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:28:39 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/04 16:21:53 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	main(void)
{
	ft_print_array(ft_strsplit("", '*'), 1);
	ft_print_array(ft_strsplit("", ' '), 1);
	ft_print_array(ft_strsplit(" kjh jbo iuh oiuh oiuho iu", ' '), 1);
	ft_print_array(ft_strsplit("abc****efj", '*'), 1);
	ft_print_array(ft_strsplit("abc*feofij***efj", '*'), 1);
	ft_print_array(ft_strsplit("abc****efj", ' '), 1);
	ft_print_array(ft_strsplit("sfkjsvflk | wf wfw ||f fw af |f sf AS|f aF||||||", '|'), 1);
	ft_print_array(ft_strsplit("		abc**		**e	fj", '\t'), 1);
	return (0);
}
