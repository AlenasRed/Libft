/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:50:08 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 10:47:58 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen(src);
	i = 0;
	if (size <= 0)
		return (slen);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
		char		l;
		char		*dest;

		dest = malloc(sizeof(char) * 37);
		l = ft_strlcpy(dest, argv[1], 37);

		if (argc)
		{
    		printf("lenght : %d \n", l);
			printf("Destination : %s \n", dest);
		}
}*/
