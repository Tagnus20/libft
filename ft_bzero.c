/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:40:53 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/05 13:37:22 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int	main(void)
{
    char str[] = "Hello, World!";
    printf("Antes de llamar a ft_bzero: %s\n", str);
	ft_bzero(str, 5);
    printf("Después de llamar a ft_bzero: %s\n", str);
    return (0);
}*/
