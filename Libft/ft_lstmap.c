/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:35:08 by gualexan          #+#    #+#             */
/*   Updated: 2024/05/27 15:37:39 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new_head;

	if (!lst || !f || !del)
		return (NULL);
	new_head = NULL;
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
			del(aux);
		else
			ft_lstadd_back(&new_head, aux);
		lst = lst->next;
	}
	return (new_head);
}
/*void	*f(void *ptr)
{
	char	*str;

	str = (char *)ptr;
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return ((void *)ptr);
}

void	del(void *content)
{
	if (content)
		free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_head;
	t_list	*iter;

	head = ft_lstnew(strdup("NodeA"));
	node1 = ft_lstnew(strdup("NodeB"));
	node2 = ft_lstnew(strdup("NodeC"));
	node3 = ft_lstnew(strdup("NodeD"));
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	printf("Original List: ");
	iter = head;
	while (iter)
	{
		printf("%s ", (char *)iter->content);
		iter = iter->next;
	}
	printf("\n");
	// Apply ft_lstmap to the list
	new_head = ft_lstmap(head, f, del);
	// Print the mapped list
	printf("Mapped List: ");
	iter = new_head;
	while (iter)
	{
		printf("%s ", (char *)iter->content);
		iter = iter->next;
	}
	printf("\n");
	return (0);
}*/
