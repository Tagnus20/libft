/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 19:39:03 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/04 21:07:25 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*#include <stdio.h>

int	main(void)
{
	t_list	*lista;
	t_list	*nodo;
	t_list	*nodo1;

	lista = NULL;
	nodo = ft_lstnew("Hola");
	nodo1 = ft_lstnew("Mundo");
	ft_lstadd_back(&lista, nodo);
	ft_lstadd_back(&lista, nodo1);
	while (lista)
	{
		printf("list = %p\n", (void *)lista);
		printf("list->data = %s\n", lista->content);
		lista = lista->next;
	}
}*/
