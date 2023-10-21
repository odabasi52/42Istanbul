/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 15:23:13 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/21 18:46:56 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_percent(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_put_ptr(uintptr_t num, int len)
{
	if (num > 15)
	{
		len = ft_put_ptr(num / 16, len);
		len += ft_putchar("0123456789abcdef"[num % 16]);
	}
	else
		len += ft_putchar("0123456789abcdef"[num]);
	return (len);
}

int	ft_printer(const char *str, va_list params, int len, int i)
{
	while (str[++i])
	{
		if (str[i] == '%' && is_percent(str[i + 1]))
		{
			if (str[++i] == 's')
				len += (ft_putstr(va_arg(params, char *)) - 2);
			else if (str[i] == 'x' || str[i] == 'X')
				len += (ft_print_hex(va_arg(params, size_t), str[i], 0) - 2);
			else if (str[i] == 'p' && (ft_putstr("0x"), 1))
				len += ft_put_ptr(va_arg(params, uintptr_t), 0);
			else if (str[i] == 'u')
				len += (ft_putnbr(va_arg(params, unsigned int), 0, str[i]) - 2);
			else if (str[i] == 'd' || str[i] == 'i')
				len += (ft_putnbr(va_arg(params, int), 0, str[i]) - 2);
			else if (str[i] == 'c')
				len += (ft_putchar(va_arg(params, int)) - 2);
			else
				len += (ft_putchar('%') - 2);
		}
		else
			ft_putchar(str[i]);
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int		len;

	va_start(params, str);
	len = ft_strlen(str);
	len = ft_printer(str, params, len, -1);
	va_end(params);
	return (len);
}
