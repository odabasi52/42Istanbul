/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:55:24 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/04 17:55:27 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	before;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else
		{
			before = str[i - 1];
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			if (!((before >= 'a' && before <= 'z')
					|| (before >= 'A' && before <= 'Z')
					|| (before >= '0' && before <= '9'))
				&& (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
