/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:05:03 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/10 18:42:02 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalnum(int c)
{
	if (c < 48 || (c > 57 && c < 65) || (c > 90 && c < 97) || c > 122)
		return (0);
	else
		return (1);
}

/*int	main(void)
{
		char	c;

	c = '/';
	printf("%d\n", isalnum(c));
	printf("MI FUNCION %d\n", ft_isalnum(c));
	if (isalnum(c))
		printf("%c is an alphabet\n", c);
	else
		printf("%c is not an alphabet\n", c);
	return (0);
}*/
