/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:49:55 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 14:20:01 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (1)
			{
				if (little[j] == '\0' || big[i + j] != little[j] || (i
						+ j) >= len)
					break ;
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>

int	main(void)
{
	char	big[] = "Big Tree";
	char	little[] = "Tree";
	char	*result;

	result = ft_strnstr(big, little, 8);
	if (result)
	{
		printf("Found with ft_strnstr: %s\n", result);
	}
	else
	{
		printf("No match found.\n");
	}
	return (0);
}
*/
