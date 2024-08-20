/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:02:06 by gualexan          #+#    #+#             */
/*   Updated: 2024/05/27 15:14:33 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*int main()
{
	t_list *lst;
	t_list *next;
	t_list *last;
	lst = ft_lstnew("1");
	next = ft_lstnew("2");
	ft_lstadd_back(&lst, next);
	last = ft_lstlast(lst);
	printf("%s\n", (char *)last->content);
	return (0);
}*/