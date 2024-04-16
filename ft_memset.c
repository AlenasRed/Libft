/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:53:21 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 10:42:21 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
		char		*arr;

		arr = (char *)ft_memset(argv[1], 'A', 5);
		if (argc)
        		printf("%s \n", arr);
}*/