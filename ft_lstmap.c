/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserjevi <mserjevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:02:28 by mserjevi          #+#    #+#             */
/*   Updated: 2024/04/16 14:50:39 by mserjevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		content = NULL;
		new = NULL;
		content = (*f)(lst->content);
		if (content)
			new = ft_lstnew(content);
		if (!new)
		{
			(*del)(content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}
