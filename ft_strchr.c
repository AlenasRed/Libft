/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:23:57 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 13:34:59 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	chr;

	chr = c;
	while (*s && *s != chr)
		s++;
	if (chr == '\0')
		return ((char *)s);
	if (*s == chr)
		return ((char *)s);
	else
	{
		return (NULL);
	}
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc)
    	printf("tolower %s: ", ft_strchr(argv[1], 'a'));
}*/