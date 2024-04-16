/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:34:23 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 10:47:20 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	j = dlen;
	if (size == 0 || dlen >= size)
		return (slen + size);
	while (j < size - 1 && src[i])
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (dlen + slen);
}
/*//mb aditional code if dest traversed without finding a NUL

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
		char		l;
		char		*dest;

		dest = malloc(sizeof(char) * 37);
		dest[0] = 'A';
		dest[1] = 'B';
		dest[2] = 'C';
		dest[3] = '\0';

		l = ft_strlcat(dest, argv[1], 12);

		if (argc)
		{
    		printf("lenght : %d \n", l);
			printf("Destination : %s \n", dest);
		}
}*/