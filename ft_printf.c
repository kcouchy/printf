/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouchma <kcouchma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:19:27 by kcouchma          #+#    #+#             */
/*   Updated: 2023/10/30 16:59:44 by kcouchma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	ft_istype(const char *input)
{
	while (*input)
	{
		if (ft_strchr(input, '%'))
		{
			input++;
			return ((char)*input);
		}
		input++;
	}
	return ('n');
}

// int	num_args(const char *input)
// {
// 	int	i;

// 	i = 0;
// 	while (*input)
// 	{
// 		if (*input == '%')
// 		{
// 			i++;
// 			input++;
// 			while (*input == '%')
// 				input++;
// 		}
// 		input++;
// 	}
// 	return (i);
// }
//THIS MAY NOT BE NECESSARY IF I DONT NEED TO INITIALISE VA_START

int	ft_printf(const char *input, ...)
{
	va_list	args;

//	va_start(args, num_args(input));
	while (*input)
	{
		if (ft_strchr(input, '%'))
		{
			
		}
	}
	if (ft_istype(input) == 'n')
		ft_putstr_fd((char *)input, 1);
	return (0);
}

int	main(void)
{
	const char	input[]="test%dte%%%skj%%ht";
	ft_printf(input);
	write(1, "\n", 1);
	printf(input);
	return (0);
}