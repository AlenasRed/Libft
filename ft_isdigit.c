/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:21:41 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/03 12:44:09 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
int main(int argc, char *argv[])
{
    if (ft_isdigit(argv[1][0]) && argc)
        printf("It's a digit");
    else
        printf("It's not a digit");
}*/