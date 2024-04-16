/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:52:45 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/15 17:34:44 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	while (*nptr == '\t' || *nptr == '\f' || *nptr == ' ' || *nptr == '\v'
		|| *nptr == '\r' || *nptr == '\n')
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res = res * 10 + *nptr - '0';
		nptr++;
	}
	return (res * sign);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc)
    	printf("res = %d ", ft_atoi(argv[1]));
}*/