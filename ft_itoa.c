/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 09:26:04 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/23 17:30:15 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	size(int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*nums;
	long int	k;
	int			j;

	k = n;
	j = size(n);
	if (n < 0)
	{
		k = k * -1;
		j++;
	}
	nums = (char *)malloc((j + 1) * (sizeof(char)));
	if (!nums)
		return (0);
	nums[j] = 0;
	while (j--)
	{
		nums[j] = k % 10 + '0';
		k = k / 10;
	}
	if (n < 0)
		*(nums + 0) = '-';
	return (nums);
}
