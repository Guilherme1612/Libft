/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualexan <gualexan@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:32:51 by gualexan          #+#    #+#             */
/*   Updated: 2024/05/27 15:11:22 by gualexan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void f(void *ptr) {
    char *str = (char *)ptr;
    if (!str)
        return; 
    while (*str) {  
        if (*str >= 'A' && *str <= 'Z')
            *str += 32;  
        str++;
    }
}


int main()
{
	t_list *lst1;
	t_list *lst2;
	lst1 = ft_lstnew("hola");
	lst2 = ft_lstnew("hola");
	ft_lstadd_back(&lst1, lst2);
	ft_lstiter(lst1, f);
	return (0);

	//printf("%s\n", (char *)lst->content);
	//Colocar entre "f(lst->content) && lst=lst->next"
}*/
