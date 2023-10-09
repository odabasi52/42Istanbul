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

void	ft_array(int a, int b, int c, int len)
{
	char	triple[5];

	triple[0] = a;
	triple[1] = b;
	triple[2] = c;
	triple[3] = ',';
	triple[4] = ' ';
	write(1, &triple, len);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 48;
	b = 49;
	c = 50;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				if (a == 55 && b == 56 && c == 57)
					ft_array(a, b, c, 3);
				else
					ft_array(a, b, c, 5);
				c++;
			}
			b++;
		}
		a++;
	}
}
