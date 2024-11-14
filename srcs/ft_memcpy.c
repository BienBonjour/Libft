/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:45:39 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 13:39:46 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "Salut";
	char	dest1[10], dest2[10];

	ft_memcpy(dest1, src, 3);
	dest1[3] = '\0';
	memcpy(dest2, src, 3);
	dest2[3] = '\0';
	printf("Dest after ft_memcpy: %s\n", dest1);
	printf("Dest after memcpy: %s\n", dest2);
	return (0);
}
*/
