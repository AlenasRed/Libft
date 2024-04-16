/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:03:37 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 10:27:48 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*little))
		return ((char *) big);
	while (*big && i < len)
	{
		if (*big == *little)
		{
			j = 0;
			while (little[j] && big[j] == little[j] && i + j < len)
				j++;
			if (!little[j])
				return ((char *) big);
		}
		big++;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc)
    	printf("substrin : %s ", ft_strnstr(argv[1], "", 10));
}*/
