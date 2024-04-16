/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:22:35 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 13:40:18 by mserjevi         ###   ########.fr       */
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

static int	ft_isalpha(int c)
{
	if (c < 0 || c > 255)
		return (0);
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	else
		return (0);
}

static int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*
int main(int argc, char *argv[])
{
    if (ft_isalnum(argv[1][0]) && argc)
        printf("It's a alphanumeric");
    else
        printf("It's not a alphanumeric");
}*/