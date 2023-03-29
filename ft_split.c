/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:30:13 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/29 19:59:12 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	contador(char const *str, char c)
{
	int	resultado;
	int	i;

	resultado = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			resultado++;
		i++;
	}
	return (resultado);
}

char	*strcreator(char *s, char c)
{
	int		i;
	int		j;
	int		iaux;
	char	*aux;

	i = 0;
	iaux = 0;
	while (s != '\0')
	{
		if (s[i] != c)
		{
			i++;
			iaux++;
		}
		if (s == c)
		{

		}
		aux = (char *) malloc(iaux * sizeof(char) + 1);
	}

	return (aux);
}

/*char	**ft_split(char const *s, char c)
{
	char	*aux;
	char	*array[contador (s, c) + 1];
	int		i;
	int		iarr;

	iarr = 0;
	i = 0;
	aux = ft_strtrim(s, ft_strchr(s, c));
	return (array);
}*/

int	main(void)
{
	char	*str;
	char	c;

	str = "Hola que tal ";
	c = ' ';

	printf("%d\n", contador(str, c));
	printf("%s\n", strcreator(str, c));

	return (0);
}
/*	while (*s != '\0')
	{
		while (*s != c)
		{
			aux[i] = *s;
			i++;
			s++;
		}
		array[iarr] = malloc(ft_strlen(aux) * sizeof(char) + 1);
		ft_strlcpy(array[iarr], aux, ft_strlen(aux));
		iarr++;
		while (*s == c)
			s++;
	}*/
