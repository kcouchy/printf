/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouchma <kcouchma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:54:35 by kcouchma          #+#    #+#             */
/*   Updated: 2023/11/02 15:54:55 by kcouchma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H

#define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "libft.h"

/**
 * @brief ft_putnbr to hex (or other) base
 * @param n Input number to convert
 * @param base Base as a string
 * @param fd Output
 */
int	ft_putbase(size_t n, char *base, int fd);

/**
 * @brief Recode the printf() function from libc (man 3 printf).
 * Implements the following conversions:
• %c %s %p %d %i %u %x %X %%
 * @param ... variadic input
 * @return int 
 */
int	ft_printf(const char *, ...);

#endif