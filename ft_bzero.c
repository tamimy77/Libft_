/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:27:55 by mzadakan          #+#    #+#             */
/*   Updated: 2023/08/25 15:10:57 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

// int main(void)
// {
// 	// int x = {1, 2, 3, 4, 5, 6};
	
// 	int y[10] = {1,2,3,4,5,6};

// 	ft_bzero(&y, 9);

// 	printf("%d\n", y[0]);
// 	printf("%d\n", y[1]);
// 	printf("%d\n", y[2]);
// 	printf("%d\n", y[3]);
// 	printf("%d\n", y[4]);
// 	printf("%d\n", y[5]);
// }