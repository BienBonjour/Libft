/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:52:23 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/08 00:35:33 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include <stdio.h>

void	display_index_and_char(unsigned int i, char *c)
{
	printf("Index : %d, Char: %c\n", i, *c);
}

int	main(void)
{
	char	str[] = "Bonjour Bot";

	ft_striteri(str, display_index_and_char);
	printf("Initial string: %s\n", str);

	ft_striteri(str, display_index_and_char);
	printf("Final string: %s\n", str);
	return (0);
}
*/
