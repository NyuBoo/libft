/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanaranj <yanaranj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:13:08 by yanaranj          #+#    #+#             */
/*   Updated: 2023/10/28 17:01:42 by yanaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	char	*final;
	size_t	i;

	final = dest;
	i = 0;
	while (!*dest || !*src)
		return (ft_strlen(final) + ft_strlen(src));
	while (i < dstsize)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (ft_strlen(final) + ft_strlen(src));
}

#include <string.h>
#include <stdio.h>

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "World!";
    
	char str3[50] = "Hello, ";
    char str4[] = "World!";

    size_t dstsize = sizeof(str1);
    size_t dstsize2 = sizeof(str3);

    size_t myresult = ft_strlcat(str3, str4, dstsize2);
    size_t result = strlcat(str1, str2, dstsize);

    printf("Resulting string: %s\n", str1);
    printf("Return value: %zu\n", result);
    
	printf("My Resulting string: %s\n", str3);
    printf("My Return value: %zu\n", myresult);

    return 0;
}
