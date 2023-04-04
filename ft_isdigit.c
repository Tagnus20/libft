/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:54:00 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/04 17:32:07 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}

/*#include <stdio.h>
#include <ctype.h>

int main ()
{
	unsigned char	c;

	c = 'a';
	printf("FUNCION ORIGINAL %d\n", isdigit(c));
	printf("MI FUNCION %d\n", ft_isdigit(c));
	if (isdigit(c))
		printf("%c is a digit\n", c);
	else
		printf("%c is not a digit\n", c);
	return (0);
}*/
