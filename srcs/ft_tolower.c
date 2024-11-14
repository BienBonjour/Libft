/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:46:51 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 13:50:49 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = 'B';
	printf("Result with ft_tolower: %c\n", ft_tolower(c));
	printf("Result with tolower: %c\n", tolower(c));
	return (0);
}
*/
