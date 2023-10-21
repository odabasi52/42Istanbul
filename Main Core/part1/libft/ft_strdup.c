/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:50:31 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/14 12:26:50 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t		len;
	char		*ptr;

	len = ft_strlen(src);
	ptr = (char *)malloc((len + 1) * 1);
	if (!ptr)
		return ((void *)0);
	ft_strlcpy(ptr, src, len + 1);
	return (ptr);
}
