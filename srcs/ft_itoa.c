/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:51:51 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 14:32:03 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_size(int n)
{
	int	size;

	size = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	num;

	len = count_size(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		str[0] = '0';
	str[len] = '\0';
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	int		nums[] = {-2147483648, -123, 0, 520, 2147483647};
	char	*str;
	int		i;
	int		num;

	i = 0;
	while (i < 5)
	{
		num = nums[i];
		str = ft_itoa(num);
		if (str)
		{
			printf("The integer %d as a string is: %s\n", num, str);
			if (strcmp(str, "-2147483648") != 0)
				free(str);
		}
		i++;
	}
	return (0);
}
*/
