/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:46:08 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/10 18:23:58 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	index;

	len = 0;
	index = 0;
	while (src[len] != '\0')
		++len;
	if (dstsize > 0)
	{
		while (src[index] != '\0' && index < dstsize - 1)
		{
			dst[index] = src[index];
			++index;
		}
		dst[index] = '\0';
	}
	return (len);
}

/*int	main(void)
{
	char	dest[0];
	char	src[] = "Hola mundo";
	size_t	size = 11;
	
	printf("La cadena copiada es: %lu\n", ft_strlcpy(dest, src, size));
	//printf("La cadena copiada es: %lu\n", strlcpy(dest, src, size));
	printf("La cadena copiada es: %s\n", dest);
	return (0);
}*/
