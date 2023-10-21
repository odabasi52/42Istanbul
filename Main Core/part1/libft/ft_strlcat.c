/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:02:13 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/09 20:07:36 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	j;

	dstlen = ft_strlen(dst);
	j = 0;
	if (dstlen >= size)
		return (ft_strlen(src) + size);
	while (src[j] && j < size - dstlen - 1)
	{
		dst[dstlen + j] = src[j];
		j++;
	}
	if (!(dstlen > size || size == 0))
		dst[dstlen + j] = '\0';
	return (dstlen + ft_strlen(src));
}

//check if (dstlen >= size), if it is it means there is no space to copy
//maximum size available for dst is returned 
