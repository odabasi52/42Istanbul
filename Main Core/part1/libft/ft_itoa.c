/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:37:40 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/16 12:41:32 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n = -n;
		count = 1;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	write_itoa(long n, char *str_itoa)
{
	int	i;
	int	count;

	count = count_digit(n);
	if (n < 0)
	{
		*str_itoa = '-';
		n = -n;
	}
	str_itoa += count;
	i = 0;
	*str_itoa = 0;
	str_itoa--;
	while (n > 0)
	{
		*str_itoa = (n % 10) + '0';
		str_itoa--;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str_itoa;

	str_itoa = (char *)malloc(count_digit((long)n) + 1);
	if (!str_itoa)
		return ((void *)0);
	if (n == 0)
	{
		str_itoa[0] = '0';
		str_itoa[1] = 0;
	}
	else
		write_itoa((long)n, str_itoa);
	return (str_itoa);
}
