/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:46:07 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/17 16:37:15 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h" 

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int size)
{
	if (size == -2147483648)
		write(1, "-2147483648", 11);
	else if (size < 0)
	{
		ft_putchar('-');
		putnbr(-size);
	}
	else if (size > 10)
	{
		putnbr(size / 10);
		putnbr(size % 10);
	}
	else
		ft_putchar(size + '0');
}

void	write_str(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	unsigned int	i;

	i = 0;
	while (par[i].str != 0)
	{
		write_str(par[i].str);
		putnbr(par[i].size);
		write(1, "\n", 1);
		write_str(par[i].copy);
		i++;
	}
}
