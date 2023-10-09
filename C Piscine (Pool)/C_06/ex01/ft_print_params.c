/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:01:29 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/12 14:01:31 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	a;

	if (argc > 1)
	{
		a = 1;
		while (argv[a])
		{
			write(1, argv[a], ft_strlen(argv[a]));
			write(1, "\n", 1);
			a++;
		}
	}
}
