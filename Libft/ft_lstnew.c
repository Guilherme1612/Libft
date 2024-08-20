/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 13:56:14 by gualexan          #+#    #+#             */
/*   Updated: 2024/05/27 15:41:59 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*int main(void)
{
	t_list *head;
	t_list *node1;
	t_list *node2;
	t_list *node3;

	head = ft_lstnew("A");
	node1 = ft_lstnew("B");
	node2 = ft_lstnew("C");
	node3 = ft_lstnew("D");

	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);

	while (head)
	{
		printf("%s ", (char *)head->content);
		head = head->next;
	}
	printf("\n");

	// Free the list
	ft_lstclear(&head, free);

}*/