/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:37:17 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/16 11:47:27 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	l;

	i = 0;
	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start > l)
		len = 0;
	else if (len > l - start)
		len = l - start;
	sub = (char *) malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	if (l > start)
	{
		while (i < len && s[start])
			*(sub + i++) = *(s + start++);
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc)
    	printf("substring : %s ", ft_substr(argv[1], 5, 10));
}*/