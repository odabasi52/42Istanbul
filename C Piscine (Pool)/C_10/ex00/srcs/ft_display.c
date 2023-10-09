/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:22:01 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/18 18:26:34 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display(char *file)
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

int	main(int argc, char **argv)
{
	if (argc <= 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		if (!ft_display(argv[1]))
			write(2, "Cannot read file.\n", 18);
	}
	return (0);
}
