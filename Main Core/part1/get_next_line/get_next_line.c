/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:20:20 by modabasi          #+#    #+#             */
/*   Updated: 2023/11/05 12:45:08 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *str)
{
	char	*buf;
	int		bytes;

	buf = (char *)malloc(BUFFER_SIZE + 1);
	if (!buf)
		return ((void *)0);
	bytes = 1;
	while (!ft_strchr(str, '\n') && bytes)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(buf);
			return (free(str), (void *)0);
		}
		buf[bytes] = 0;
		str = ft_strcat(str, buf);
	}
	return (free(buf), str);
}

char	*my_get_line(char *str)
{
	char	*line;
	int		i;

	if (!str[0])
		return ((void *)0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		line = (char *)malloc(i + 2);
	else
		line = (char *)malloc(i + 1);
	if (!line)
		return ((void *)0);
	i = 0;
	while (str[i] && str[i] != '\n')
		((line[i] = str[i]) && (i++, 1));
	if (str[i] == '\n')
		line[i++] = '\n';
	line[i] = 0;
	return (line);
}

char	*get_to_new_line(char *str, int len)
{
	char	*buff;
	size_t	i;

	if (!str[len])
		return (free(str), (void *)0);
	buff = malloc(ft_strlen(str) - len + 1);
	if (!buff)
		return ((void *)0);
	i = 0;
	while (str[len])
		buff[i++] = str[len++];
	buff[i] = 0;
	free(str);
	return (buff);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return ((void *)0);
	str = read_file(fd, str);
	if (!str)
		return ((void *)0);
	line = my_get_line(str);
	str = get_to_new_line(str, ft_strlen(line));
	return (line);
}
