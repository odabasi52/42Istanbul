/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:04:04 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/14 13:04:06 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long	len;
	int		*ptr;
	int		i;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	len = (max - min);
	ptr = (int *)malloc(len * 4);
	if (!ptr)
		return (-1);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (len);
}
