/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:39:59 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/14 14:45:02 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*c_str;
	unsigned char	new_c;
	size_t			i;

	i = 0;
	new_c = (unsigned char)c;
	c_str = (unsigned char *)str;
	while (i < n)
	{
		if (c_str[i] == new_c)
			return (&c_str[i]);
		i++;
	}
	return ((void *)0);
}
