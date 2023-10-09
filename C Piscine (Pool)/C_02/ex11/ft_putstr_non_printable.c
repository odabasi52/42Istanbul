/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:15:28 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/04 19:15:29 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_hexa(int c)
{
	char	*base;

	base = "0123456789abcdef";
	if (c < 0)
		c += 256;
	if (c >= 16)
	{
		write(1, &base[c / 16], 1);
		write(1, &base[c % 16], 1);
	}
	else
	{
		write(1, "0", 1);
		write(1, &base[c], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			write_hexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
