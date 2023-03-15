/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:06:18 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/14 14:13:29 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;
	int	len;

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
	return (0);
}

/*int	main(void)
{
	const char	*s1;
	int	s2;

	s1 = "abbbbbbbb";
	s2 = 'a';
	printf("%s\n", ft_strrchr(s1, s2));
	printf("%s\n", strrchr(s1, s2));
	//printf("%s\n", prueba(s1, s2));
	return (0);
}*/
