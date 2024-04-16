/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:27:52 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/16 13:52:28 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*curent;
	t_list	*next;

	if (*lst && del)
	{
		curent = *lst;
		while (curent)
		{
			next = curent->next;
			ft_lstdelone(curent, del);
			curent = next;
		}
	}
	*lst = NULL;
}
