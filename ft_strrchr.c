/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:16:09 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/23 17:41:11 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	x;

	i = ft_strlen(s) - 1;
	x = (char)c;
	while (c > 127)
	{
		c = c - 128;
	}
	if (c == '\0')
	{
		return ((char *)s + ft_strlen(s));
	}
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (0);
}
