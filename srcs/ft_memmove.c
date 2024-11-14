/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:24:44 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 13:41:03 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dest;
	s = (const char *)src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[20] = "Hello, world!";

	ft_memmove(str + 7, str, 5);
	printf("After ft_memmove: %s\n", str);
	strcpy(str, "Hello, world!");
	memmove(str + 7, str, 5);
	printf("After memmove: %s\n", str);
	return (0);
}
*/
