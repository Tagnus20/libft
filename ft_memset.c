/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:20:36 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/04 22:10:20 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *) b;
	i = 0;
	while (len > i)
	{
		a[i] = (unsigned char) c;
		i++;
	}
	b = (void *) a;
	return (b);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	b[50] = "Hola buenas que tal";
	char	c = 'a';
	size_t	len = 10;

	printf("Antes de memset: %s\n", b);
	printf("Despues:  %s\n", memset(b, c, len));
	printf("Despues:  %s\n", ft_memset(b, c, len));
	return (0);
}*/
