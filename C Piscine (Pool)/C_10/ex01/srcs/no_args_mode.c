/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_args_mode.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:20:33 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/19 18:20:34 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	no_args(char **argv)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
	{
		if (errno == 0)
			write(1, &buf, 1);
		else
		{
			ft_putstr(basename(argv[0]));
			ft_putstr(": stdin: ");
			ft_putstr(strerror(errno));
			write(2, "\n", 1);
			return ;
		}
	}
}
