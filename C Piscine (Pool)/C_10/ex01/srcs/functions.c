/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:17:37 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/19 18:17:40 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	is_file_valid(char *file)
{
	int		f;
	int		is_read;
	char	c;

	f = open(file, O_RDONLY);
	if (f == -1)
		return (0);
	is_read = read(f, &c, 1);
	while (is_read)
	{
		if (is_read == -1)
			return (0);
		write(1, &c, 1);
		is_read = read(f, &c, 1);
	}
	close(f);
	return (1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}
