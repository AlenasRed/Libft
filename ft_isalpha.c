/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:21:48 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/15 17:36:15 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

static int	ft_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

static int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if (c < 0 || c > 255)
		return (0);
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	else
		return (0);
}

/*
int main(int argc, char *argv[])
{
    if (ft_isalpha(argv[1][0]) && argc)
        printf("It's a letter");
    else
        printf("It's not a letter");
}*/