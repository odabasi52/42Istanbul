/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:12:13 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/20 14:24:35 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		lower;
	int		higher;

	i = 1;
	lower = 1;
	higher = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) >= 0)
			higher++;
		if (f(tab[i - 1], tab[i]) <= 0)
			lower++;
		i++;
	}
	if (lower == i || higher == i)
		return (1);
	return (0);
}
