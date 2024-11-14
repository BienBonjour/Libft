/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:44:53 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 13:37:48 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[20] = "Hello, World!";

	printf("Before ft_memset: %s\n", str);
	ft_memset(str, '*', 5);
	printf("After ft_memset: %s\n", str);
	strcpy(str, "Hello, World!");
	memset(str, '*', 5);
	printf("After memset: %s\n", str);
	return (0);
}
*/
