/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:44:11 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 13:36:32 by kabernar         ###   ########.fr       */
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

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *str = "bye";
	printf("The length of the string \"%s\" is : %ld\n", str,
		ft_strlen(str));
	printf(strlen);
	return (0);
}
*/
