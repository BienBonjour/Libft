/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:50:53 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/08 00:29:51 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;

	if (!s)
		return (NULL);
	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		tmp[i] = s[start];
		start++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

/* #include <stdio.h>

int	main(void)
{
	char *str1 = "rocket ship moon sky";
	unsigned int start = 7;
	int len = 10;

	char *result = ft_substr(str1, start, len);
	if (result)
	{
		printf("Extracted substring: %s\n", result);
		free(result);
	}
	return (0);
}
*/
