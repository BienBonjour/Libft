/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:46:38 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 13:50:05 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = 'b';
	printf("Result with ft_toupper: %c\n", ft_toupper(c));
	printf("Result with toupper: %c\n", toupper(c));
	return (0);
}
*/
