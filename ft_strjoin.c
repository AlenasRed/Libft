/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:42:04 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 10:46:50 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	size_t	i;
	char	*str;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	i = 0;
	str = (char *) malloc (sizeof(char) * (l1 + l2 + 1));
	if (str == NULL)
		return (NULL);
	while (i < l1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < l1 + l2)
	{
		str[i] = s2[i - l1];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc)
    	printf("substring : %s ", ft_strjoin(argv[1], argv[2]));
}
*/