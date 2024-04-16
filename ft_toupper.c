/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:53:52 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 10:33:46 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*
#include <stdio.h>


int main(int argc, char *argv[])
{
	if (argc)
    	printf("toupper %d: ", ft_toupper(argv[1][0]));
}*/