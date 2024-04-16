/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:47:24 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/16 11:31:26 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_delimiter_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s[0])
		return (count);
	if (s[i] != c)
		count++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

void	free_mem(char **arr, int i)
{
	i--;
	while (i >= 0)
	{
		free(arr[i]);
		i--;
	}
	free(arr);
}

static size_t	ft_split_help(char **arr, char *s, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		len = 0;
		while (*(s + len) != c && *(s + len))
			len++;
		arr[i] = ft_substr(s, 0, len);
		if (!arr[i])
		{
			free_mem(arr, i);
			return (0);
		}
		i++;
		s = s + len;
	}
	arr[i] = NULL;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**arr;

	count = ft_delimiter_count(s, c);
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	if (arr == NULL)
		return (NULL);
	if (!count)
	{
		arr[0] = NULL;
		return (arr);
	}
	if (!ft_split_help(arr, (char *)s, c))
		return (NULL);
	return (arr);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	size_t	i;
	char **arr;

	i = 0;
	if (argc)
	{
		arr =  ft_split(argv[1], argv[2][0]);
		printf("run\n");
		while (arr[i])
		{
    		printf("split : %s\n", arr[i]);
			i++;
		}
	}
}*/