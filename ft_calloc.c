/* ************************************************************************** */
/*	*/
/*	:::	  ::::::::   */
/*   ft_calloc.c	:+:	  :+:	:+:   */
/*	+:+ +:+	 +:+	 */
/*   By: averdejo <averdejo@student.42madrid.com>   +#+  +:+	   +#+	*/
/*	+#+#+#+#+#+   +#+	   */
/*   Created: 2023/03/20 17:00:13 by averdejo	  #+#	#+#	 */
/*   Updated: 2023/04/04 16:54:31 by averdejo	 ###   ########.fr	   */
/*	*/
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	num_to_reserve;

	num_to_reserve = count * size;
	if (num_to_reserve < count || num_to_reserve < size)
		return (NULL);
	p = (void *) malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, num_to_reserve);
	return (p);
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
	i = 0;
	p = ft_calloc(SIZE_MAX / 2, 3);
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
