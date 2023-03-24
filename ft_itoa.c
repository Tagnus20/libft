/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:25:51 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/24 19:55:05 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_digitlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 9)
	{
		len++;
		n = n / 10;
	}
	if (n >= 0 && n <= 9)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*x;
	int		n2;
	int		len;

	n2 = n;
	len = 0;
	len = ft_digitlen(n);

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else
	{
		x = (char *) malloc((len * sizeof(char) + 1));
		if (!x)
			return (NULL);
		x[len] = '\0';
		if (n < 0)
		{
			x[0] = 45;
			n *= -1;
		}
		if (n == 0)
		{
			x[0] = 48;
			return (x);
		}
		while (n > 0)
		{
			x[len - 1] = (n % 10) + '0';
			len--;
			n = n / 10;
		}
	}
	return (x);
}

/*int	main(void)
{
	int	n = -623;

	printf("%s\n", ft_itoa(n));
	printf("%d\n", n);
	return (0);
}*/
