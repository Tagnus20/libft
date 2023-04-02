/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 01:09:57 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/02 16:52:26 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/*
	del(lst->content);
	free(lst);

	del(&lst->content);
	free(lst->content);
	La memoria de ’next’ no debe liberarse. Se refiere al nodo que apunta next? o a next?
*/
