/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:10:28 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 11:29:38 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s + i);
		i++;
	}
}
/*
void	ft_toupper(unsigned int i, char *c)
{
	if (i < 100000)
	{
		if (*c >= 'a' && *c <= 'z')
			*c = *c - 32;
	}
}
#include <stdio.h>

int main(int argc, char *argv[])
{
		if (argc)
		{
			ft_striteri(argv[1],*ft_toupper);
        	printf("map : %s \n", argv[1]);
		}
}*/