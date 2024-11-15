/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:47:46 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 14:04:12 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *str = "Lovely Flower";
	char test_char;

	test_char = 'l';
	printf("Result with ft_strchr: %s\n", ft_strchr(str, test_char));
	printf("Result with standard strchr: %s\n", strchr(str, test_char));
	return (0);
}
*/
