/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:52:43 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/04 22:38:00 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
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
	printf("%p\n", ft_lstlast(&lista));
}*/
