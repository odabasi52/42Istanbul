/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:17:15 by modabasi          #+#    #+#             */
/*   Updated: 2023/11/05 11:58:55 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif
# include <stdlib.h>
# include <unistd.h>

char	*ft_strchr(char *str, char c);
char	*get_next_line(int fd);
char	*read_file(int fd, char *str);
size_t	ft_strlen(char *str);
char	*ft_strcat(char *str, char *buf);
char	*get_to_new_line(char *str, int len);

#endif