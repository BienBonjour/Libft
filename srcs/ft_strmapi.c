/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:52:07 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/08 00:34:47 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	size_t			len;

	i = 0;
	len = ft_strlen(s);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>
#include <ctype.h>

char	ft_to_upper(unsigned int i, char c)
{
	(void)i;
	return(char)toupper((unsigned char)c);
}

int	main(void)
{
	char	*result;

	result = ft_strmapi("bonjour", ft_to_upper);
	if (result)
	{
		printf("Result with ft_strmapi: %s\n", result);
		free(result);
	}
	return (0);
}
*/
