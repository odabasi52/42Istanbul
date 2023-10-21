/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:15:48 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/14 14:25:57 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	new_c;
	char			*new_str;
	size_t			i;

	i = -1;
	new_c = (unsigned char)c;
	new_str = (char *)str;
	while (++i < len)
		new_str[i] = c;
	return (str);
}
