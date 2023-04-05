/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 18:36:10 by averdejo          #+#    #+#             */
/*   Updated: 2023/04/05 12:41:26 by averdejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write (fd, &*s, 1);
		s++;
	}
	write (fd, "\n", 1);
}

/*#include <stdio.h>

int	main(void)
{
	char	*c;
	int		fd;

	c = "HOLA BUENAS";
	fd = 1;
	ft_putendl_fd(c, fd);
}*/
