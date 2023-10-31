/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanaranj <yanaranj@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:20:47 by yanaranj          #+#    #+#             */
/*   Updated: 2023/10/30 19:53:59 by yanaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*s1_;
	unsigned char	*s2_;

	s1_ = (unsigned char *)s1;
	s2_ = (unsigned char *)s2;
	i = 0;
	while (i < n && (s1_[i] != '\0' && s2_[i] != '\0'))
	{
		if (s1_[i] != s2_[i])
			i = -1;
		s1_++;
		s2_++;
		i++;
	}
	printf("S1: %u", s1_[i]);
	printf("S2: %u", s2_[i]);
	if (i != n)
		return (s1_[i] - s2_[i]);
	//if (s1_[i] > s2_[i] || s1_[i] < s2_[i])
	//	return (s1_[i] - s2_[i]);
	return (0);
}
