/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:51:25 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/08 00:30:53 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_start(const char *s1)
{
	size_t	start;

	start = 0;
	while (s1[start] && (s1[start] == ' ' || s1[start] == '\n'
			|| s1[start] == '\t'))
		start++;
	return (start);
}

static size_t	find_end(const char *s1, size_t start)
{
	size_t	end;

	end = start;
	while (s1[end])
		end++;
	while (end > start && (s1[end - 1] == ' ' || s1[end - 1] == '\n' || s1[end
				- 1] == '\t'))
		end--;
	return (end);
}

static char	*copy_chars(char *str, const char *s1, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = find_start(s1);
	end = find_end(s1, start);
	if (start >= end)
		return (malloc(1));
	len = end - start;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	copy_chars(str, s1, start, end);
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char	*str;
	char	*res;

	str = "     HEllo     ";
	res = ft_strtrim(str, " \n\t");
	printf("%s\n", res);
	free(res);
	return (0);
}
*/
