/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:29:53 by gualexan          #+#    #+#             */
/*   Updated: 2024/05/22 19:12:48 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}
/*int main()
{
    t_list *head = NULL;

    t_list *node1 = ft_lstnew("Z");
    t_list *node2 = ft_lstnew("G");
    t_list *node3 = ft_lstnew("A");

    ft_lstadd_back(&head, node1);
    ft_lstadd_back(&head, node2);
    ft_lstadd_back(&head, node3);

    printf("List: ");
    while(head)
    {
	printf("%s\n", (char*)head->content);
	head = head->next;
    }

    ft_lstclear(&head, free);

    return 0;
}*/