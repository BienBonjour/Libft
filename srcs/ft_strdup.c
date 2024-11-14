/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:50:34 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/08 00:29:11 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*dup;

	len = 0;
	i = 0;
	while (s[len] != '\0')
		len++;
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "High five !";
	char	*dup1;
	char	*dup2;

	dup1 = ft_strdup(str);
	dup2 = strdup(str);
	if (dup1 && dup2)
	{
		printf("Result with ft_strdup: %s\n", dup1);
		printf("Result with strdup: %s\n", dup2);
	}
	else
		printf("Memory allocation failed.\n");
	free(dup1);
	free(dup2);
	return (0);
}
*/
