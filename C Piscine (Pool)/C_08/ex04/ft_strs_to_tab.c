/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:20:43 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/17 13:43:10 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	unsigned int		len;
	int					i;
	char				*ptr;

	len = ft_strlen(src);
	ptr = (char *)malloc((len + 1) * 1);
	if (!ptr)
		return ((void *)0);
	i = 0;
	while (src[i])
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*t_obj;
	int			i;

	t_obj = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!t_obj)
		return ((void *)0);
	i = 0;
	while (i < ac)
	{
		t_obj[i].str = av[i];
		t_obj[i].copy = ft_strdup(av[i]);
		t_obj[i].size = ft_strlen(av[i]);
		i++;
	}
	t_obj[i].str = 0;
	return (t_obj);
}
