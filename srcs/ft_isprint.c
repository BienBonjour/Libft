/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:43:52 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 13:35:30 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char tests[] = {'A', 'z', '5', ' ', '\n', '\t', 31, 127};
	int i = 0;
	while (i < 8)
	{
		printf("ft_isprint ('%c'): %d\n", tests[i], ft_isprint(tests[i]));
		i++;
	}
	return 0;
}
*/
