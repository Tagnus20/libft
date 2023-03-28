/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:30:13 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/29 00:02:33 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	contador(char const *str, char c)
{
	int	resultado;
	int	i;

	resultado = 0;
	i = 0;
	while (*str != '\0')
	{
		if (str[i] == c)
			resultado++;
		i++;
	}
	return (resultado);
}

char	**ft_split(char const *s, char c)
{
	char	*aux;
	char	*array[contador (s, c) + 1];
	int		i;
	int		iarr;

	iarr = 0;
	i = 0;
	while (*s != '\0')
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
	}
	return (array);
}
