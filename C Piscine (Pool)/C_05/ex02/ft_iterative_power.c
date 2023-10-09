/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 19:36:25 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/12 19:36:27 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	a;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	a = nb;
	while (power > 1)
	{
		nb *= a;
		power--;
	}
	return (nb);
}
