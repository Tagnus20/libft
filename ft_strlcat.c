/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 20:27:04 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/10 19:37:01 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	j = 0;
	res = 0;
	while (dst[i] != '\0')
		++i;
	while (src[res] != '\0')
		++res;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && i + 1 < size)
	{
		dst[i] = src [j];
		++i;
		++j;
	}
	dst[i] = '\0';
	return (res);
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
