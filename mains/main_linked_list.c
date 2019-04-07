/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_linked_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikrkharb <ikrkharb@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:08:50 by ikrkharb          #+#    #+#             */
/*   Updated: 2019/04/07 15:23:36 by ikrkharb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_delete(void *node, size_t content_size)
{
	(void)content_size;
	free(node);
}

void	content_reset(t_list *node)
{
	node->content = 0;
}

t_list		ft_tolow(t_list *node)
{
	int i;

	i = 0;
	while (i < node->content_size)
	{
		if ((char)node->content >= 'a' && (char)node->content <= 'z')
		   node->content -= 32;
		i++;
	}
	return (*node);
}

int		main(void)
{
	t_list *list;
	t_list	*new;
	t_list	*new1;
	int		i;

	list = ft_lstnew("hello", 5);
	new = ft_lstnew("12345", 5);
	new1 = ft_lstnew("abcdefj", 2);
	ft_lstadd(&list, new);
	ft_lstadd(&list, new1);
	//ft_lstdelone(&, &ft_delete);
	//ft_lstdel(&list, &ft_delete);
	//ft_lstiter(list, &content_reset);
	new1 = ft_lstmap(list, &ft_tolow);
	while (list)
	{
		printf("list %d = |%s|\n",i,  list->content);
		list = list->next;
		i++;
	}
	return (0);
}
