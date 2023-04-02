/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:39:03 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/02 00:54:09 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lastnodo;

	if (*lst == NULL)
		*lst = new;
	else
	{
		lastnodo = ft_lstlast(*lst);
		lastnodo->next = new;
	}
}

/*int main(void)
{
    // create the initial linked list with one node
    t_list *lst = ft_lstnew("first node");

    // create two new nodes
    t_list *new1 = ft_lstnew("second node");
    t_list *new2 = ft_lstnew("third node");

    // add the new nodes to the linked list
    ft_lstadd_back(&lst, new1);
    ft_lstadd_back(&lst, new2);

    // print the linked list
    t_list *node = lst;
    while (node != NULL)
    {
        printf("%s\n", (char*)node->content);
        node = node->next;
    }

    return 0;
}*/
