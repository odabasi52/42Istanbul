/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:08:11 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/12 19:08:13 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	fact = 1;
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
