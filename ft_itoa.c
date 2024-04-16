/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:41:16 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/15 15:56:42 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check_len(int n)
{
	size_t	l;

	l = 0;
	if (n > 0)
		l--;
	while (n)
	{
		n /= 10;
		l++;
	}
	return (l);
}

static char	*convert_num(int n, int l)
{
	char	*num;
	int		sign;

	sign = 1;
	if (n < 0)
		sign *= -1;
	num = (char *) malloc(sizeof(char) * (l + 2));
	if (num == NULL)
		return (NULL);
	num[l + 1] = '\0';
	while (l > 0)
	{
		if (sign < 0)
			num[l] = '0' + (n % 10) * -1;
		else
			num[l] = '0' + (n % 10);
		n /= 10;
		l--;
	}
	if (sign < 0)
		num[0] = '-';
	else
		num[0] = '0' + (n % 10);
	return (num);
}

char	*ft_itoa(int n)
{
	size_t	l;
	char	*num;

	if (n == 0)
	{
		num = (char *) malloc(sizeof(char) * 2);
		if (num == NULL)
			return (NULL);
		num[0] = '0';
		num[1] = '\0';
	}
	else
	{
		l = check_len(n);
		num = convert_num(n, (int)l);
		if (num == NULL)
			return (NULL);
	}
	return (num);
}
/*
#include <stdio.h>

int main()
{
    printf("itoa : %s\n", ft_itoa(1000034));
	printf("itoa : %s\n", ft_itoa(-2147483648));
    printf("itoa : %s\n", ft_itoa(47483647));
    printf("itoa : %s\n", ft_itoa(-47483647));
    printf("itoa : %s\n", ft_itoa(0));
}*/