/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:47:31 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/14 11:47:34 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int	ft_total_len(int size, char **str, int sep_len)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += (sep_len + ft_strlen(str[i]));
		i++;
	}
	len -= sep_len;
	return (len + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	int		i;

	if (size == 0)
	{
		concat = malloc(1);
		*concat = 0;
		return (concat);
	}
	concat = (char *)malloc(ft_total_len(size, strs, ft_strlen(sep)) * 1);
	if (!concat)
		return ((void *)0);
	i = 0;
	*concat = 0;
	while (i < size)
	{
		ft_strcat(concat, strs[i]);
		if (i < (size - 1))
			ft_strcat(concat, sep);
		i++;
	}
	return (concat);
}
