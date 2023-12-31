/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:24:02 by jade-car          #+#    #+#             */
/*   Updated: 2023/12/14 15:15:00 by yanaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int num)
{
	int	size;

	size = 0;
	if (num >= 10)
		size += ft_unsigned(num / 10);
	if (size == -1)
		return (-1);
	size += ft_char(num % 10 + '0');
	if (size == -1)
		return (-1);
	return (size);
}
