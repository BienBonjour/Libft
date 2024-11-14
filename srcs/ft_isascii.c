/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:43:18 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/13 11:50:03 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int c = 0;
	while (c <= 127)
	{
		if (ft_isascii(c) != isascii(c))
		{
			printf("Error at char: %d\n", c);
			return 1;
		}
		c++;
	}
	printf("Success: ft_isascii matches isascii for all ASCII characters.\n");
	return 0;
}
*/
