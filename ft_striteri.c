/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:52:33 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/05 12:26:40 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>

void	f(unsigned int i, char *s)
{
	s[i] *= i;
}

void	print_str(unsigned int i, char *c)
{
	printf("s[%d] = %c\n", i, *c);
}
int	main(void)
{
	char s[] = "Hello, world!";

	ft_striteri(s, &print_str);
	return (0);
}*/
