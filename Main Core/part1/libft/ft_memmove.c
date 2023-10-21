/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:59:39 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/14 15:57:06 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dt;
	const char	*sc;
	size_t		i;

	if (!dst && !src)
		return ((void *)0);
	dt = dst + len - 1;
	sc = src + len - 1;
	i = -1;
	if (dst > src)
	{
		while (++i < len)
		{
			*dt = *sc;
			sc--;
			dt--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
