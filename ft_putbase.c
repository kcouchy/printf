/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouchma <kcouchma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:28:26 by kcouchma          #+#    #+#             */
/*   Updated: 2023/11/02 15:58:10 by kcouchma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

int	ft_putbase(size_t n, char *base, int fd)
{
	char	c;
	size_t	base_len;
	static int	count;

	count = 0;
	base_len = ft_strlen(base);
	if (n > base_len)
	{
		ft_putbase(n / base_len, base, fd);
	}
	c = base[n % base_len];
	count++;
	write(fd, &c, 1);
	return ((int)count);
}

// int	main(void)
// {
// 	printf("\n%u\n", (ft_putbase(6, "0123456789ABCDEF", 1)));
// 	printf("\n%u", (ft_putbase(14257, "0123456789ABCDEF", 1)));
// 	return (0);
// }