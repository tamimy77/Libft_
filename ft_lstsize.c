/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:56:04 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/23 17:44:37 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	nodes;

	nodes = 0;
	if (!lst)
	{
		return (0);
	}
	while (lst)
	{
		lst = lst->next;
		nodes++;
	}
	return (nodes);
}
