/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:23:19 by modabasi          #+#    #+#             */
/*   Updated: 2023/08/31 14:23:24 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	get_digit_count(int number)
{
	int	count;

	count = 0;
	while (number != 0)
	{
		count += 1;
		number = number / 10;
	}
	return (count);
}

void	write_digits(int N)
{
	int	count;
	int	i;
	int	r;
	int	i2;
	int	arr[15];

	count = get_digit_count(N);
	i = 0;
	while (N != 0) 
	{
		r = N % 10;
		arr[i] = r;
		i++;
		N = N / 10;
	}
	i2 = count - 1;
	while (i2 >= 0)
	{
		arr[i2] += 48;
		write(1, &arr[i2], 1);
		i2--;
	}
}

void	ft_putnbr(int nb)
{
	char	minus;

	minus = '-';
	if (nb >= 0)
	{
		write_digits(nb);
	}
	else
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			write(1, &minus, 1);
			write_digits(-nb);
		}
	}
}
