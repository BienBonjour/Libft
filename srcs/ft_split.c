/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:51:38 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/08 00:31:51 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;
	int		in_word;

	count = 0;
	i = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

static char	*word_cpy(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	word = malloc(finish - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_cpy(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

/* #include <stdio.h>

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hello, World. Hi!", ' ');
	i = 0;
	if (!result)
		return (1);
	while (result[i])
	{
		printf("Segment %d: %s\n", i, result[i]);
		free(result[i++]);
	}
	free(result);
	return (0);
}
*/
