/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:09:38 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/04 17:42:15 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	unsigned char	c;

	c = 33;
	printf("FUNCION ORIGINAL %d\n", isprint(c));
	printf("Mi función %d\n", ft_isprint(c));
	if (ft_isprint(c))
		printf("%c is printable\n", c);
	else
		printf("%c is not printable\n", c);
	return (0);
}*/
