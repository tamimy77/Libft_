/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:01:33 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/23 17:31:22 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	char	ctr;
	size_t	i;

	str = (char *)s;
	ctr = (char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ctr)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	if (i == 0)
	{
		return (NULL);
	}
	return (0);
}
