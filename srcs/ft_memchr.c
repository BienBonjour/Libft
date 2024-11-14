/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:49:26 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 14:10:29 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (n--)
	{
		if (*ptr == value)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[20] = "bla bla bla";
	char	*ret;

	ret = ft_memchr(src, 'z', 10);
	if (ret != NULL)
		printf("Result with ft_memchr. Character found at : %p\n", ret);
	else
		printf("Result with ft_memchr. Character not found\n");
	printf("Result with standard memchr function: ");
	return (0);
}
*/
