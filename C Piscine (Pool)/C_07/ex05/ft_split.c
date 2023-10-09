/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 02:12:26 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/13 02:12:29 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char sep, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (sep == charset[i])
			return (1);
		i++;
	}
	if (sep == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_separator(str[i + 1], sep)
			&& !is_separator(str[i], sep))
			words++;
		i++;
	}
	return (words);
}

void	write_str(char *dest, char *from, char *sep)
{
	int	i;

	i = 0;
	while (!is_separator(from[i], sep))
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **strings, char *str, char *sep)
{
	int		i;
	int		j;
	int		index;

	index = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (is_separator(str[i], sep))
			i++;
		else
		{
			j = 0;
			while (!is_separator(str[i + j], sep))
				j++;
			strings[index] = (char *)malloc(1 * (j + 1));
			write_str(strings[index], str + i, sep);
			i += j;
			index++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;

	words = count_words(str, charset);
	res = (char **)malloc(8 * (words + 1));
	res[words] = 0;
	write_split(res, str, charset);
	return (res);
}
