/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:50:25 by kabernar          #+#    #+#             */
/*   Updated: 2024/11/11 14:22:33 by kabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int *arr_ft = ft_calloc(5, sizeof(int));
	int *arr_std = calloc(5, sizeof(int));

	if (!arr_ft || !arr_std || arr_ft[0] != 0 || arr_std[0] != 0)
	{
		printf("Error\n");
		free(arr_ft);
		free(arr_std);
		return(1);
	}
	printf("Success\n");
	free(arr_ft);
	free(arr_std);
	return(0);
}
*/
