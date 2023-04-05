/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:27:04 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/05 12:41:55 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	altdest;
	size_t	altsrc;
	size_t	i;

	altdest = ft_strlen(dest);
	altsrc = ft_strlen(src);
	i = 0;
	if (dsize <= altdest)
	{
		return (altsrc + dsize);
	}
	while (src[i] && (i + altdest) < (dsize - 1))
	{
		dest[altdest + i] = src[i];
		i++;
	}
	dest[altdest + i] = '\0';
	return (altdest + altsrc);
}

/*int	main(void)
{
	char str1[20] = "Hello";
    char str2[] = " world!";
    size_t size = 3;

    printf("Before strlcat:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

	size_t len = ft_strlcat(str1, str2, size);

    printf("After strlcat:\n");
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
    printf("len = %zu\n", len);

    return (0);
}*/
