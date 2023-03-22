/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:35:20 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/22 16:20:01 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*chr;
	int		counter;

	counter = 0;
	c = (unsigned char) c;
	chr = (char *) s;
	while (chr[counter] != c)
	{
		if (chr[counter] == '\0')
			return (NULL);
		chr++;
	}
	return (chr);
}

/*int	main(void)
{
	const char	*s1;
	int	s2;

	s1 = "there is so ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	s2 = ' ';
	printf("%s\n", ft_strchr(s1, s2));
	printf("%s\n", strchr(s1, s2));
	printf("%s\n", prueba(s1, s2));
	return (0);
}*/
