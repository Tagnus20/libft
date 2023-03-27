/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:00:13 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/27 17:24:42 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	num_to_reserve;

	num_to_reserve = count * size;
	if (num_to_reserve < count || num_to_reserve < size)
		return (NULL);
	p = (void *) malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, num_to_reserve);
	return (p);
}
