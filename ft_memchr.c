/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:02:38 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/20 14:22:25 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*chr;
	unsigned char	x;

	x = (unsigned char) c;
	chr = (unsigned char *) s;
	while (n)
	{
		if (*chr == x)
			return ((void *)chr);
		chr++;
		n--;
	}
	return (NULL);
}
/*int	main(void)
{
	const void	*s1;
	int	s2;

	s1 = "there is so ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	s2 = ' ';
	printf("%s\n", ft_memchr(s1, s2, 10));
	printf("%s\n", memchr(s1, s2, 10));
	return (0);
}*/
