/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:06:18 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/05 13:03:02 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*chr;

	c = (unsigned char) c;
	len = 0;
	chr = (char *) s;
	while (chr[len] != '\0')
		len++;
	while (len >= 0)
	{
		if (chr[len] == c)
			return (chr + len);
		len--;
	}
	return (NULL);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	*s1;
	int	s2;

	s1 = "aabbbbbbbb";
	s2 = 'a';
	printf("%s\n", ft_strrchr(s1, s2));
	printf("%s\n", strrchr(s1, s2));
	//printf("%s\n", prueba(s1, s2));
	return (0);
}*/
