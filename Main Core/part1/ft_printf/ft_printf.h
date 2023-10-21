/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:50:44 by modabasi          #+#    #+#             */
/*   Updated: 2023/10/21 18:46:38 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_putstr(char const *str);
int	ft_putnbr(long long n, int len, char c);
int	ft_putchar(int c);
int	ft_print_hex(unsigned int num, char c, int len);
int	ft_printf(const char *str, ...);
int	ft_printer(const char *str, va_list params, int len, int i);
int	is_percent(char c);

#endif