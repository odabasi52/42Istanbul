/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudundar <mudundar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:33:00 by mudundar          #+#    #+#             */
/*   Updated: 2023/09/03 18:19:37 by mudundar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char character);

void	check_char(int y, int x, int satir, int sutun)
{
	if (satir == 1 || satir == y)
	{
		if (satir == 1 && (sutun == 1 || sutun == x))
			ft_putchar('A');
		else if (satir == y && (sutun == 1 || sutun == x))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (sutun == 1)
	{
		ft_putchar('B');
	}
	else if (sutun == x)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	satir;
	int	sutun;

	if (x <= 0 || y <= 0)
	{
		write(1, "Degerler negatif veya 0 olamaz\n", 31);
		return ;
	}
	satir = 1;
	sutun = 1;
	while (satir <= y)
	{
		sutun = 1;
		while (sutun <= x)
		{
			check_char(y, x, satir, sutun);
			sutun++;
		}
		ft_putchar('\n');
		satir++;
	}
}
