/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:26:55 by gualexan          #+#    #+#             */
/*   Updated: 2024/05/27 15:01:14 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*void	del(void *content)
{
	if (content)
		free(content);
}
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	head = ft_lstnew("Node");
	node1 = ft_lstnew("Node1");
	node2 = ft_lstnew("Node2");
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	if (head)
		ft_putstr_fd("Not Error: head is not NULL before ft_lstdelone\n", 2);
	if (node1)
		ft_putstr_fd("Not Error: head is not NULL before ft_lstdelone\n", 2);
	ft_lstdelone(head, del);
	if (head)
		ft_putstr_fd("Error: head is not NULL after ft_lstdelone\n", 2);
	if (node1)
		ft_putstr_fd("Error: node1 is not NULL after ft_lstdelone\n", 2);
}*/
