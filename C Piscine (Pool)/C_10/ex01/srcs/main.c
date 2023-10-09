/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:18:09 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/19 18:20:17 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (!is_file_valid(argv[i]))
			{
				ft_putstr(basename(argv[0]));
				ft_putstr(": ");
				ft_putstr(argv[i]);
				ft_putstr(": ");
				ft_putstr(strerror(errno));
				write(2, "\n", 1);
			}
			i++;
		}
	}
	else
	{
		no_args(argv);
	}
	return (0);
}
