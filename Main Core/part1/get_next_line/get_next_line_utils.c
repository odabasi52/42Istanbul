/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:20:23 by modabasi          #+#    #+#             */
/*   Updated: 2023/11/05 12:30:39 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(char *str, char c)
{
	if (str == NULL || c == '\0')
		return (NULL);
	while (*str)
		if (*str++ == c)
			return (--str);
	return (NULL);
}

char	*ft_strcat(char *str, char *buf)
{
	size_t		i;
	size_t		j;
	char		*concat;

	if (!str)
	{
		str = (char *)malloc(1);
		if (!str)
			return (0);
		str[0] = 0;
	}
	concat = (char *)malloc(ft_strlen(str) + ft_strlen(buf) + 1);
	if (!concat)
		return ((void *)0);
	i = -1;
	while (str[++i])
		concat[i] = str[i];
	j = 0;
	while (buf[j])
		concat[i++] = buf[j++];
	concat[i] = 0;
	return (free(str), concat);
}
