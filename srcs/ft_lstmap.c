/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:17:01 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 15:23:40 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_delete(void *content, size_t content_size)
{
	(void)content_size;
	ft_memdel(&content);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;
	t_list	*head;

	head = NULL;
	while (lst)
	{
		node = f(lst);
		if (!head)
			head = node;
		if (!node)
		{
			ft_lstdel(&head, ft_delete);
			return (NULL);
		}
		while (head->next)
			head = head->next;
		head->next = node;
		lst = lst->next;
	}
	return (head);
}
