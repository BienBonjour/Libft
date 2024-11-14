/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:42:33 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/13 11:47:51 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* #include <stdio.h>

int	main(void)
{
	int c = '0';
	while (c <= '9')
	{	
		printf("ft_isdigit('%c'): %d\n", c, ft_isdigit(c));
		c++;
	}
	return 0;
}
*/
