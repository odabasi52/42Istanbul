/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:37:16 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/10 13:37:17 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	is_in_base(char s, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == s)
			return (1);
		i++;
	}
	return (0);
}

int	get_index_of_base(char *base, char s)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == s)
			break ;
		i++;
	}
	return (i);
}

int	is_errors(char *base, int base_count)
{
	int	i;
	int	j;

	if (base_count <= 1)
		return (1);
	i = 0;
	while (base[i])
	{
		if ((base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			|| base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		minus_count;
	long	number;

	if (is_errors(base, base_len(base)))
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	minus_count = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus_count++;
		str++;
	}
	number = 0;
	while (*str && is_in_base(*str, base))
	{
		number *= base_len(base);
		number += get_index_of_base(base, *str);
		str++;
	}
	if (minus_count % 2 == 0)
		return (number);
	return (-number);
}
