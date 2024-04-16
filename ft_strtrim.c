/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:06:17 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/15 11:06:22 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_firstpos(const char *str, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	gate;

	i = 0;
	gate = 0;
	if (!set)
		return (NULL);
	while (str[i])
	{
		gate = 1;
		j = 0;
		while (set[j])
		{
			if (str[i] == set[j])
				gate = 0;
			j++;
		}
		if (gate)
			return ((char *)(str + i));
		i++;
	}
	return ((char *)str);
}

static char	*ft_lastpos(const char *str, const char *set, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	gate;

	i = len;
	if (!set)
		return (NULL);
	while (i)
	{
		gate = 1;
		j = 0;
		while (set[j])
		{
			if (str[i] == set[j])
				gate = 0;
			j++;
		}
		if (gate)
			return ((char *)(str + i));
		i--;
	}
	if (gate == 0)
		return ((char *)str);
	return ((char *)(str + len));
}

static char	*ft_cpy_custom(const char *s1, char *first, char *last)
{
	char	*str;
	char	*s;

	if (first == s1 && last == s1)
		str = (char *) malloc(sizeof(char) * 1);
	else
		str = (char *) malloc(sizeof(char) * (last - first + 2));
	s = str;
	if (str == NULL)
		return (NULL);
	if (first == s1 && last == s1)
	{
		*str = '\0';
		return (str);
	}
	while (first != (last + 1))
	{
		*str = *first;
		first++;
		str++;
	}
	*str = '\0';
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*first;
	char	*last;
	char	*str;
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1) - 1;
	first = ft_firstpos(s1, set);
	last = ft_lastpos(s1, set, len);
	str = ft_cpy_custom(s1, first, last);
	if (str == NULL)
		return (NULL);
	return (str);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc)
    	printf("substring : %s", ft_strtrim(argv[1], argv[2]));
}*/
