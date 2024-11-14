/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:45:20 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 15:11:38 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/* #include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	tableau[2] = {'A', 'B'};

	printf("Before : %c %c\n", tableau[0], tableau[1]);
	ft_bzero(tableau, sizeof(tableau));
	printf("After : %d %d\n", tableau[0], tableau[1]);
	bzero(tableau, sizeof(tableau));
	printf("Result with standard bzero function: %d %d\n", tableau[0],
		tableau[1]);
	return (0);
}
*/
