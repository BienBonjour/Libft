/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:41:50 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 14:37:01 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	int c = 'A';
	while (c <= 'z')
	{
		printf("ft_isalpha('%c') = %d\n", c, ft_isalpha(c));
		c++;
	}
	return 0;
}
*/
