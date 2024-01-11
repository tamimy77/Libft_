/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzadakan <mzadakan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:46:17 by mzadakan          #+#    #+#             */
/*   Updated: 2023/08/25 15:17:19 by mzadakan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			word_count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (word_count);
}

static int	count_letter(char const *s, char c, int i)
{
	size_t	j;

	j = 0;
	if (s[j] == '\0')
		return (0);
	while (s[i + j] != c && s[i + j] != '\0')
	{
		j++;
	}
	return (j);
}

static void	ft_free(char **str)
{
	int	j;

	j = 0;
	while (str[j])
		free(str[j++]);
	free(str);
}

char	**mysp(const char *s, char c)
{
	int		i;
	int		j;
	int		size;
	char	**str;

	i = 0;
	j = -1;
	str = (char **)malloc((count_words(s, c) + 1) * (sizeof(char *)));
	if (str == NULL)
		return (NULL);
	while (++j < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		size = count_letter(s, c, i);
		str[j] = ft_substr(s, i, size);
		if (!str[j])
		{
			ft_free(str);
			return (NULL);
		}
		i = i + size;
	}
	str[j] = 0;
	return (str);
}

char	**ft_split(const char *s, char c)
{
	if (!s) 
		return (NULL);
	return (mysp (s, c));
}

int main ()
{
	char **str;
	*str = *ft_split("mohamed , ibrahim , altamimi", ',');
	while (str != NULL )
	{
		printf("%s\n", *str);
		str++;
	}
}