/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:46:26 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 13:44:15 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (dst[i] && i < siz)
		i++;
	while (src[j])
		j++;
	if (siz <= i)
		return (siz + j);
	k = 0;
	while (src[k] && (i + k) < (siz - 1))
	{
		dst[i + k] = src[k];
		k++;
	}
	dst[i + k] = '\0';
	return (i + j);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst1[20] = "Big ";
	char	dst2[20] = "Big ";

	ft_strlcat(dst1, "Tree", 20);
	printf("After ft_strlcat: %s\n", dst1);

	strlcat(dst2, "Tree", 20);
	printf("After strlcat: %s\n", dst2);
	return (0);
}
*/
