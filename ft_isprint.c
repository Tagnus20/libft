/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:09:38 by averdejo          #+#    #+#             */
/*   Updated: 2023/03/10 18:47:37 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	c;

	c = 56;
	printf(" %d\n", isprint(c));
	printf("Mi función %d\n", ft_isprint(c));

	return (0);
}*/
