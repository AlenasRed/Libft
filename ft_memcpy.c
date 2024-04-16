/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:24:35 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 13:07:25 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*d;
	const char		*s;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = dest;
	s = src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
		char		*arr;
		char		*dest;

		dest = malloc(sizeof(char) * 20);
		arr = (char *)ft_memcpy(dest, argv[1], 5);

		if (argc)
        		printf("%s \n", arr);
}*/