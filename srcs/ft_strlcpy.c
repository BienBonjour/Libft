/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:46:16 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 15:57:57 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!src)
		return (0);
	while (src[count] != '\0')
		count++;
	if (siz == 0)
		return (count);
	while (i < count && i < siz - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char		dest[3];
	const char	*src = "Hello";

	ft_strlcpy(dest, src, sizeof(dst));
	printf("Result ft_strlcpy: %s\n", dst);

	memset(dest, 0, sizeof(dst));

	strlcpy(dest, src, sizeof(dst));
	printf("Result strlcpy: %s\n", dst);
	return (0);
}
*/
