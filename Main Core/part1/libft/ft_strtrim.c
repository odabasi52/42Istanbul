/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:43:18 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/14 19:19:59 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char s, const char *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (set[i] == s)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	last;
	size_t	index;

	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	if (s1[i] == 0)
		return (ft_strdup(""));
	last = ft_strlen(s1) - 1;
	while (is_in_set(s1[last], set) && last >= 0)
		last--;
	str = (char *)malloc(sizeof(char) * (last - i + 2));
	if (!str)
		return ((void *)0);
	index = 0;
	while (i <= last)
		str[index++] = s1[i++];
	str[index] = 0;
	return (str);
}
