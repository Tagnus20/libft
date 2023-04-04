/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:37:30 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/04 21:04:35 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*lista;
	t_list	*nodo;
	t_list	*nodo1;

	lista = NULL;
	nodo = ft_lstnew("Hola");
	nodo1 = ft_lstnew("Mundo");
	ft_lstadd_front(&lista, nodo1);
	ft_lstadd_front(&lista, nodo);
	while (lista)
	{
		printf("list = %p\n", (void *)lista);
		printf("list->data = %s\n", lista->content);
		lista = lista->next;
	}
}*/
