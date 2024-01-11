/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:37:41 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/23 17:26:34 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*a;
	t_list	*b;

	if (lst == NULL || del == NULL || *lst == NULL)
	{
		return ;
	}
	a = *lst;
	while (a != NULL)
	{
		b = a -> next;
		del(a -> content);
		free (a);
		a = b;
	}
	*lst = NULL;
}
