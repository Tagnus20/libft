/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:54:00 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/09 15:04:14 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c < 48 || c > 57)
		return (0);
	else
		return (1);
}

/*int main () 
{
	char	c;

	c = 'a';
	printf("%d\n", isdigit(c));
	printf("MI FUNCION %d\n", ft_isdigit(c));
	if (isdigit(c))
		printf("%c is a digit\n", c);
	else
		printf("%c is not a digit\n", c);
	return (0);
}*/
