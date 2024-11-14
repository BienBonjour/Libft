/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:48:21 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 14:04:28 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*str = "Lovely Flower !";
	char		test_char;

	test_char = 'l';
	printf("Result ft_strrchr: %s\n", ft_strrchr(str, test_char));
	printf("Result standard strrchr: %s\n", strrchr(str, test_char));
	return (0);
}
*/
