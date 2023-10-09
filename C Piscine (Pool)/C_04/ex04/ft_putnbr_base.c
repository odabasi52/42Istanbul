/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:39:59 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/10 18:40:00 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	putnbr(long nb, char *base, int base_count)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= base_count)
	{
		putnbr(nb / base_count, base, base_count);
		putnbr(nb % base_count, base, base_count);
	}
	else
		write(1, &base[nb], 1);
}

int	is_errors(char *base, int base_count)
{
	int	i;
	int	j;

	if (base_count <= 1)
		return (1);
	i = 0;
	while (base[i])
	{
		if ((base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			|| base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_num;

	base_num = find_base(base);
	if (is_errors(base, base_num))
		return ;
	putnbr(nbr, base, base_num);
}
