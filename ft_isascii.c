/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:43:12 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/04 17:28:11 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	unsigned	char	c;

	c = 128;
	printf("FUNCION ORIGINAL %d\n", isascii(c));
	printf("MI FUNCION %d\n", ft_isascii(c));
	if (isascii(c))
		printf("%c is an ascii\n", c);
	else
		printf("%c is not an ascii\n", c);
	return (0);
}*/
