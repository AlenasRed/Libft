/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:06:07 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 10:43:26 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_put(int n, int fd, int sign)
{
	if (sign < 0)
	{
		if (n > -10)
		{
			ft_putchar_fd('0' + n * -1, fd);
			return ;
		}
		ft_put(n / 10, fd, sign);
		ft_putchar_fd(((n % 10) * -1) + '0', fd);
	}
	else
	{
		if (n < 10)
		{
			ft_putchar_fd('0' + n, fd);
			return ;
		}
		ft_put(n / 10, fd, sign);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	sign = 1;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		sign *= -1;
	}
	ft_put(n, fd, sign);
}
/*
int	main(void)
{
		ft_putnbr_fd(0, 1);
		ft_putchar_fd('\n', 1);
		ft_putnbr_fd(-2147483648, 1);
		ft_putchar_fd('\n', 1);
		ft_putnbr_fd(2147483647, 1);
		ft_putchar_fd('\n', 1);
		ft_putnbr_fd(-147483647, 1);
		ft_putchar_fd('\n', 1);
		ft_putnbr_fd(147483647, 1);
		ft_putchar_fd('\n', 1);
}*/