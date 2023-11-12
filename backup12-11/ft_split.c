/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanaranj <yanaranj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:05:12 by yanaranj          #+#    #+#             */
/*   Updated: 2023/11/12 19:05:23 by yanaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	w_len(const char *str, char c)
{
	size_t count;

	count = 0;
	while (str[count] && str[count] != c)
		count++;
	return (count);
}

static int	w_count(const char *str, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
}
/*
int main ()
{
	const char *frase = "Hola mundo de  42";
	size_t res = w_count(frase, ' ');
	size_t wd_len = w_len(frase, ' ');
	printf("Mi Test: %zu\n", res);
	printf("Test: %zu\n", wd_len);
	return (0);	
}
*/
