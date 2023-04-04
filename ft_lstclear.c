/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 19:44:42 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/04 22:42:03 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del || !*lst)
		return ;
	while ((*lst))
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		*lst = tmp;
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
	if (!lista)
		printf("No hay lista\n");
	else
		printf("Hay lista\n");
	ft_lstclear(&lista, del);
	return (0);
}*/
