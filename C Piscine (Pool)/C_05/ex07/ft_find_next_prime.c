/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:37:20 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/13 14:01:28 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;

	if (nb <= 1)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	prime = 4;
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	while (prime < nb)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
