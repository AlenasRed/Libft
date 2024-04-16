/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:13:56 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/12 13:03:07 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c < 0 || c > 255)
		return (0);
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>


int main()
{
    if (ft_isascii(24))
        printf("It's a ascii");
    else
        printf("It's not a ascii");
}*/