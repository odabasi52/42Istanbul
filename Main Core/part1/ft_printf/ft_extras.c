/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extras.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:58:17 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/21 18:46:35 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char const *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	else
	{
		while (str[i])
			ft_putchar(str[i++]);
	}
	return (i);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(long long n, int len, char c)
{
	if (n < 0)
	{
		if (c != 'u')
			len += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		len = ft_putnbr(n / 10, len, c);
		len += ft_putchar((n % 10) + '0');
	}
	else
		len += ft_putchar(n + '0');
	return (len);
}

int	ft_print_hex(unsigned int num, char c, int len)
{
	char	*base;

	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num > 15)
	{
		len = ft_print_hex(num / 16, c, len);
		len += ft_putchar(base[num % 16]);
	}
	else
		len += ft_putchar(base[num]);
	return (len);
}
