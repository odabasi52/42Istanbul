/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:27:00 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/16 13:11:53 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *str, char sep)
{
	int	words;

	words = 0;
	while (*str)
	{
		if (*str != sep && (*(str + 1) == sep || *(str + 1) == 0))
			words++;
		str++;
	}
	return (words);
}

static void	*ft_free(char **strings, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		strings[i] = 0;
		free(strings[i++]);
	}
	free(strings);
	return ((void *)0);
}

static char	**ft_create_split(char *str, char sep, char **strings, int len)
{
	int		index;
	int		i;

	index = 0;
	while (*str)
	{
		if (*str == sep)
			str++;
		else
		{
			i = 0;
			while (str[i] != sep && str[i])
				i++;
			strings[index] = (char *)malloc(i + 1);
			if (!strings[index])
				return (ft_free(strings, len));
			i = 0;
			while (*str != sep && *str)
				strings[index][i++] = *(str++);
			strings[index++][i] = 0;
		}
	}
	strings[index] = 0;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		len;

	if (!s)
		return (0);
	len = count_words((char *)s, c);
	strings = (char **)malloc(sizeof(char *) * (len + 1));
	if (!strings)
		return (0);
	return (ft_create_split((char *)s, c, strings, len));
}
