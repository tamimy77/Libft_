/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:01:14 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/23 12:06:16 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nob, size_t sob)
{
	char	*str;

	if (sob != 0 && nob > UINT_MAX / sob)
		return (NULL);
	str = malloc(nob * sob);
	if (!str)
	{
		return (NULL);
	}
	ft_bzero(str, nob * sob);
	return (str);
}
