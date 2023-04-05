/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:38:34 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/05 10:57:33 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (n && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	if (n)
		return (*str1 - *str2);
	else
		return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const void	*s1;
	const void	*s2;

	s1 = "there is so ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	s2 = "there iss so ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	printf("%d\n", ft_memcmp(s1, s2, 10));
	printf("%d\n", memcmp(s1, s2, 10));
	return (0);
}*/
