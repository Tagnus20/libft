/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:25:51 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/24 00:37:48 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*x;
	int		n2;
	int		len;

	n2 = n;
	len = 0;
	while (n2 != 0)
	{
		len++;
		n2 = n2 / 10;
	}
	x = (char *) malloc((len + 1) * sizeof(char));
	if (!x)
		return (NULL);
	x[len] = '\0';
	while (n != 0 && len != 0)
	{
		n2 = n % 10;
		x[len - 1] = n2 + '0';
		len--;
		n = n / 10;
	}
	printf("%s\n", x);
	return (x);
}

/*int	main(void)
{
	int	n = 150;

	printf("%s\n", ft_itoa(n));
	printf("%d\n", n);
	return (0);
}*/
