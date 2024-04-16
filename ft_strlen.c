/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:29:11 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 10:18:35 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (*s++)
		l++;
	return (l);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
		if (argc)
        	printf("strin lenght : %d \n", ft_strlen(argv[1]));
}*/
