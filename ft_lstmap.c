/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:18:15 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/09 15:24:58 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*tmp;
	t_list	*new;

	head = NULL;
	tmp = NULL;
	while (lst)
	{
		new = f(lst);
		if (!tmp)
		{
			tmp = new;
			head = tmp;
		}
		else
		{
			tmp->next = new;
			tmp = tmp->next;
		}
		lst = lst->next;
	}
	return (head);
}
