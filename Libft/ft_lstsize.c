/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:20:46 by gualexan          #+#    #+#             */
/*   Updated: 2024/05/27 15:39:37 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/*int main()
{
	t_list *lst;
	t_list *next;
	t_list *next1;
	t_list *next2;
	lst = ft_lstnew("1");
	next = ft_lstnew("2");
	next1 = ft_lstnew("3");
	next2 = ft_lstnew("4");
	ft_lstadd_back(&lst, next);
	ft_lstadd_back(&lst, next1);
	ft_lstadd_back(&lst, next2);
	printf("%i\n", ft_lstsize(lst));
	return (0);
}*/