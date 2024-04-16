/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 10:48:31 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 13:38:44 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last;
	unsigned char	chr;

	chr = c;
	last = NULL;
	while (*s)
	{
		if (*s == chr)
			last = (char *)s;
		s++;
	}
	if (chr == '\0')
		return ((char *)s);
	return (last);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc)
    	printf("strrchr %s: ", ft_strrchr(argv[1], 'a'));
}*/