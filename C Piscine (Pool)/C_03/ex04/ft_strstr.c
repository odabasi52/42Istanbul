/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:39:34 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/06 18:39:36 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	char			*haystack;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		haystack = str;
		while (*haystack == to_find[i] && to_find[i])
		{
			i++;
			haystack++;
		}
		if (to_find[i] == '\0')
			return (str);
		str++;
	}
	return ((void *)0);
}
