/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:31:38 by modabasi          #+#    #+#             */
/*   Updated: 2023/08/30 17:31:44 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	g_arr[2];

char	*array(int nb)
{
	g_arr[1] = (nb % 10) + 48;
	nb /= 10;
	g_arr[0] = nb + 48;
	return (g_arr);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write(1, array(a), 2);
			write(1, " ", 1);
			write(1, array(b), 2);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
