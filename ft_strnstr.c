/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:18:36 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/15 13:50:52 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	is;

	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0' && len > i)
	{
		is = 0;
		while (haystack[i + is] == needle[is] && haystack[i + is]
			!= '\0' && i + is < len)
		{
			if (needle[is + 1] == '\0')
				return ((char *)haystack + i);
			is++;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*str1 = "Hola buenas que tal estas";
	const char	*str2 = "buenas";
	size_t	n = 19;


	printf("%s\n", strnstr(str1, str2, n));
	printf("%s\n", ft_strnstr(str1, str2, n));
}*/
