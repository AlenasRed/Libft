/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:32:47 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/15 17:49:34 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char				*arr;
	size_t				i;

	i = 0;
	if (size && nmemb * size / size != nmemb)
		return (NULL);
	arr = (char *)malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
/*
#include <stdio.h>

int main()
{
    	printf("check : %d ", *(int *) ft_calloc(463, 463));
}*/