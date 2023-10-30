/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouchma <kcouchma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:13:45 by kcouchma          #+#    #+#             */
/*   Updated: 2023/10/30 12:22:17 by kcouchma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_words(char const *s, char c)
{
	size_t	word_count;

	word_count = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		word_count++;
		while (*s == c && *s)
			s++;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	size_t	word_count;
	size_t	i;

	if (!s)
		return (NULL);
	word_count = (ft_count_words(s, c));
	i = 0;
	output = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!output)
		return (NULL);
	while (*s && i < word_count)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			output[i] = ft_substr(s, 0, (ft_strchr(s, c) - s));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	output[i] = NULL;
	return (output);
}

// int	main(void)
// {
// 	char const s[] = "            ";
// 	char	c = ' ';
// 	char	**output = ft_split(s, c);
// 	int		words = ft_count_words(s, c);
// 	int		i = 0;

// 	printf("%d\n", words);
// 	while (i < words)
// 	{
// 		printf("%s\n", output[i]);
// 		free(output[i]);
// 		i++;
// 	}
// 	free(output);
// 	return (0);
// }
