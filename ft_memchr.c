/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:36:39 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 15:05:34 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp;
	unsigned char	chr;
	size_t			i;

	chr = (unsigned char) c;
	temp = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (temp[i] != chr && --n)
		i++;
	if (temp[i] == chr)
		return ((void *)(s + i));
	else
		return (NULL);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc)
    	printf("match : %s ",(char *)ft_memchr(argv[1], 'f', 5));
}*/