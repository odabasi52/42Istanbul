/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:23:53 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/20 15:26:00 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sum(int a, int b)
{
	return (a + b);
}

int	div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

int	mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	mul(int a, int b)
{
	return (a * b);
}
