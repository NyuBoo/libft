/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanaranj <yanaranj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:09:45 by yanaranj          #+#    #+#             */
/*   Updated: 2023/11/08 17:27:05 by yanaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*trim;
	size_t		len;

	if(!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	trim = (char *)malloc(sizeof(char) * (len + 1));
	if (!trim)
		return(NULL);
	while (*trim && ft_strchr(set, *trim))
		trim++;
	while (len && ft_strchr(set, trim[len]))
		len--;
	return (ft_substr(trim, 0, len + 1));
}

int main ()
{
	char *str1 = "2864Hola82";
	char *num = "0";
	printf("%s\n", ft_strtrim(str1, num));
	return (0);
}
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (i < len && ft_strchr(set, s1[len - 1]))
		len--;
	trim = ft_substr(s1, i, len - i);
	return (trim);
}
