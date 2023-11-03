/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouchma <kcouchma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:54:35 by kcouchma          #+#    #+#             */
/*   Updated: 2023/11/03 11:06:51 by kcouchma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "libft.h"

/**
 * @brief Recode the printf() function from libc (man 3 printf).
 * Implements the following conversions:
• %c %s %p %d %i %u %x %X %%
 * @param ... variadic input
 * @return int 
 */
int	ft_printf(const char *input, ...);

#endif