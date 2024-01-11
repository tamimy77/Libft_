/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:10:19 by mzadakan          #+#    #+#             */
/*   Updated: 2023/07/23 17:41:20 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*lines(char *str, const char *s1, int start, int end)
{
	int	i;

	i = 0;
	while (end > start)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (s1[0] == '\0' || set[0] == '\0')
		return (ft_strdup(s1));
	i = 0;
	start = 0;
	while (check_set(s1[start], set) == 1 && s1[start] != '\0')
		start++;
	end = ft_strlen(s1);
	while (check_set(s1[end - 1], set) == 1 && end > start)
		end--;
	str = (char *)malloc((end - start) + 1);
	if (!str)
		return (NULL);
	return (lines(str, s1, start, end));
}
