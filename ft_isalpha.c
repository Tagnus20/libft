/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:25:06 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/09 12:42:18 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int c)
{
	if (c < 65 || (c > 90 && c < 97) || c > 122)
		return (0);
	else
		return (1);
}

/*int	main(void)
{
	char	c;

	c = '1';
	printf("%d\n", isalpha(c));
	printf("MI FUNCION %d\n", ft_isalpha(c));
	if (isalpha(c))
		printf("%c is an alphabet\n", c);
	else
		printf("%c is not an alphabet\n", c);
	return (0);
}*/
