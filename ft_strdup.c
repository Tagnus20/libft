/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:55:18 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/05 12:16:40 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*cs1;
	size_t	len;

	len = ft_strlen(s1) + 1;
	cs1 = (char *) malloc(len * sizeof(char));
	if (!cs1)
		return (NULL);
	ft_memcpy(cs1, s1, len);
	return (cs1);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*strcpy;

	str = "Hola buenas que tal";
	strcpy = ft_strdup(str);
	printf("%s\n", str);
	printf("%s\n", strcpy);

}*/
