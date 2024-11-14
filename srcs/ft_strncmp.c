/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:49:13 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 17:09:21 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t	n;

	str1 = "Hello";
	str2 = "Help";
	n = 5;
	printf("Result with ft_strncmp: %d\n", ft_strncmp(str1, str2, n));
	printf("Result with strncmp: %d\n", strncmp(str1, str2, n));
	return (0);
}
*/
