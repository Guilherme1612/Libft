/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:58:55 by gualexan          #+#    #+#             */
/*   Updated: 2024/05/22 19:12:37 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
/*int main()
{
    t_list *head = NULL;

    t_list *node1 = ft_lstnew("Z");
    t_list *node2 = ft_lstnew("G");
    t_list *node3 = ft_lstnew("A");

    ft_lstadd_front(&head, node1);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    printf("List: ");
    while(head)
    {
	printf("%s\n", (char*)head->content);
	head = head->next;
    }

    ft_lstclear(&head, free);

    return 0;
}*/