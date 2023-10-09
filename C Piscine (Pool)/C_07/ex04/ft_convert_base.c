/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:02:52 by marvin            #+#    #+#             */
/*   Updated: 2023/09/14 18:56:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	per_base(char	*base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (!(base[i] > 32 && base[i] <= 126)
			|| (base[i] == '-' || base[i] == '+'))
			return (0);
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

int	ft_strlen(char	*str);

int	char_to_digit(char c, char	*base);

char	*convert_result(char	*str, int nbr)
{
	int	end;
	int	start;
	int	temp;

	start = 0;
	end = nbr - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}

int	is_in_base(char c, char *base)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_res(char *base_to, char *base_from, int *i, char *nbr)
{
	char	*result;
	long	check;
	long	decimal_value;

	decimal_value = 0;
	check = 0;
	result = (char *)malloc(50);
	while (nbr[*i] && is_in_base(nbr[*i], base_from))
	{
		check = decimal_value * ft_strlen(base_from);
		if (check <= 2147483647 || check * -1 >= -2147483648)
			decimal_value *= ft_strlen(base_from);
		check = decimal_value + char_to_digit(nbr[*i], base_from);
		if (check <= 2147483647 || -1 * check >= -2147483648)
			decimal_value += char_to_digit(nbr[*i], base_from);
		*i += 1;
	}
	*i = 0;
	while (decimal_value > 0)
	{
		result[*i] = base_to[decimal_value % ft_strlen(base_to)];
		*i += 1;
		decimal_value /= ft_strlen(base_to);
	}
	return (result);
}

char	*ft_convert_base(char	*nbr, char	*base_from, char	*base_to)
{
	int		i;
	int		sign;
	char	*result;

	i = 0;
	sign = 1;
	if (per_base(base_from) == 0 || per_base(base_to) == 0)
		return (0);
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign *= -1;
		i++;
	}
	result = ft_res(base_to, base_from, &i, nbr);
	if (sign == -1)
	{
		result[i] = '-';
		i++;
	}
	result[i] = 0;
	return (convert_result(result, i));
}
