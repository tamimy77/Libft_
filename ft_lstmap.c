/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 13:00:47 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/23 18:06:08 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*itr;
	t_list	*list;
	t_list	*node;
	void	*new;

	if (lst == NULL || f == NULL)
	{
		return (NULL);
	}
	itr = lst;
	list = NULL;
	while (itr)
	{
		new = f(itr->content);
		node = ft_lstnew(new);
		if (!node)
		{
			del(new);
			ft_lstclear(&list, del);
		}
		ft_lstadd_back(&list, node);
		itr = itr->next;
	}
	return (list);
}
