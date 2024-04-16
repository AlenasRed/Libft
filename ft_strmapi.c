/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:01:11 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 11:30:09 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			l;
	char			*str;

	i = 0;
	l = ft_strlen(s);
	str = (char *) malloc(sizeof(char) * (l + 1));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	ft_toupper(unsigned int i, char c)
{
	if (i < 100000)
	{
		if (c >= 'a' && c <= 'z')
			c = c - 32;
		return (c);
	}
	return (c);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
		if (argc)
        	printf("map : %s \n", ft_strmapi(argv[1],*ft_toupper));
}*/