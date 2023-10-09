/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:26:38 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/21 12:50:14 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/ft.h"

int	ret_ops(int num1, int num2, char op)
{
	int	(*ops[5])(int, int);

	ops[0] = &sum;
	ops[1] = &sub;
	ops[2] = &div;
	ops[3] = &mod;
	ops[4] = &mul;
	if (op == '+')
		return (ops[0](num1, num2));
	else if (op == '-')
		return (ops[1](num1, num2));
	else if (op == '/')
		return (ops[2](num1, num2));
	else if (op == '%')
		return (ops[3](num1, num2));
	else if (op == '*')
		return (ops[4](num1, num2));
	return (-1);
}

void	writer(int i_ops, char c)
{
	if (i_ops == -1 && c == '/')
		write (1, "Stop : division by zero\n", 24);
	else if (i_ops == -1 && c == '%')
		write (1, "Stop : modulo by zero\n", 22);
	else
	{
		if (i_ops == -1)
			write(1, "0\n", 1);
		else
		{
			ft_putnbr(i_ops);
			write(1, "\n", 1);
		}
	}
}

int	main(int argc, char **argv)
{
	int		num1;
	int		num2;
	int		i_ops;

	if (argc == 4)
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);
		if (!(argv[2][0] == '+' || argv[2][0] == '-'
					|| argv[2][0] == '*' || argv[2][0] == '/'
					|| argv[2][0] == '%'))
			write(1, "0\n", 2);
		else if (!(ft_strlen(argv[2]) == 1))
			write(1, "0\n", 2);
		else
		{
			i_ops = ret_ops(num1, num2, argv[2][0]);
			writer(i_ops, argv[2][0]);
		}
	}
}
