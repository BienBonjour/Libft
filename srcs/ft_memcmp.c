/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:49:40 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 14:13:10 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "Byte";
	char	s2[] = "Byt";
	int		result;

	result = ft_memcmp(s1, s2, 4);
	printf("Result with ft_memcmp. Compare s1 and s2: %d\n", result);
	printf("Result with standard memcmp: %d\n", result);
	return (0);
}
*/
