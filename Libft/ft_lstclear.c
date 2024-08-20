/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:45:48 by gualexan          #+#    #+#             */
/*   Updated: 2024/05/22 20:53:21 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	head = *lst;
	while (head)
	{
		tmp = head->next;
		(*del)(head->content);
		free(head);
		head = tmp;
	}
	*lst = NULL;
}

/*void	del(void *content)
{
	if (content)
		free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node;
	t_list	*node1;
	t_list	*node2;
	t_list	*iter;

	head = NULL;
	node = ft_lstnew(strdup("Node"));
	node1 = ft_lstnew(strdup("Node1"));
	node2 = ft_lstnew(strdup("Node2"));
	ft_lstadd_front(&head, node);
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	iter = head;
	while (iter)
	{
		printf("%s -> ", (char *)iter->content);
		iter = iter->next;
	}
	printf("NULL\n");
	ft_lstclear(&head, del);
	while (iter)
	{
		printf("%s -> ", (char *)iter->content);
		iter = iter->next;
	}
}*/
