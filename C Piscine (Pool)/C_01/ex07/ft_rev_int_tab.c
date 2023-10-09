/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:22:56 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/03 14:22:57 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	half;
	int	holder;

	half = size / 2;
	i = 0;
	while (i < half)
	{
		size--;
		holder = tab[i];
		tab[i] = tab[size];
		tab[size] = holder;
		i++;
	}
}
