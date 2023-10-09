/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:03:26 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/12 15:03:27 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	printer(char **str, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, str[i], ft_strlen(str[i]));
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		a;
	int		control;
	char	*min;

	if (argc > 1)
	{
		control = 1;
		while (control)
		{
			control = 0;
			a = 1;
			while (a < (argc - 1))
			{
				if (ft_strcmp(argv[a], argv[a + 1]) > 0)
				{
					control = 1;
					min = argv[a + 1];
					argv[a + 1] = argv[a];
					argv[a] = min;
				}
				a++;
			}
		}
	}
	printer(argv, argc);
}
