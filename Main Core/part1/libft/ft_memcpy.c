/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 11:39:02 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/14 14:27:42 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dt;
	const char	*sc;
	size_t		i;

	if (!dst && !src)
		return ((void *)0);
	dt = dst;
	sc = src;
	i = 0;
	while (i < n && (dst != src))
	{
		dt[i] = sc[i];
		i++;
	}
	return (dst);
}
