/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:51:08 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/08 00:30:32 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*tmp;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	tmp = ptr;
	while (*s1)
		*tmp++ = *s1++;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = '\0';
	return (ptr);
}

/* #include <stdio.h>

int	main(void)
{
	char	*s1 = "Oups ";
	char	*s2 = "Loop !";
	char	*result = ft_strjoin(s1, s2);

	if (result)
	{
		printf("Result ft_strjoin: %s\n", result);
		free(result);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}
	return 0;
}
*/
