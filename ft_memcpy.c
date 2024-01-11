/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:15:48 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/23 17:31:33 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)dst;
	str2 = (char *)src;
	i = 0;
	if (!dst && !src)
	{
		return (0);
	}
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
