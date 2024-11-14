/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:42:52 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/13 11:48:44 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	int c = 0;
	while (c <= 127)
	{
		if ((c >= 32 && c <= 126))
		{
			printf("ft_isalnum('%c') = %d\n", c, ft_isalnum(c));	
		}
		c++;
	}
	return (0);
}
*/
