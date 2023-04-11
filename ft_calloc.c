/* ************************************************************************** */
/*	*/
/*	:::	  ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*	+:+ +:+	 +:+	 */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+	   +#+	*/
/*	+#+#+#+#+#+   +#+	   */
/*   Created: 2023/03/20 17:00:13 by averdejo	  #+#	#+#	 */
/*   Updated: 2023/04/11 15:48:19 by averdejo         ###   ########.fr       */
/*	*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, count * size);
	return (tmp);
}

/*#include <stdio.h>
#include <stdint.h>

int	main(void)
{
	int		*p;
	int		*c;
	size_t	i;
	size_t	n;

	n = 5;
	i = 1;
	p = ft_calloc(n, i);
	c = calloc(n, sizeof(int));
	if (p == NULL)
	{
		printf("Error: ft_calloc returned NULL.\n");
		return (1);
	}
	while (i++ < n)
		printf("%d", p[i]);
	printf("\n");
	i = 0;
	while (i++ < n)
		printf("%d ", c[i]);
	printf("\n");
	return (0);
}*/
