/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modabasi <modabasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:33:38 by modabasi          #+#    #+#             */
/*   Updated: 2023/09/17 12:09:25 by modabasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) \
    ({ \
        int result; \
        if (Value < 0) { \
            result = -Value; \
        } else { \
            result = Value; \
        } \
        result; \
    })

#endif
