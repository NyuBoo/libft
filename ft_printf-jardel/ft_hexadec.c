/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:48:45 by jade-car          #+#    #+#             */
/*   Updated: 2023/12/14 14:14:19 by yanaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadec(unsigned int number, char *xtype)
{
	int	size;

	size = 0;
	if (number < 16)
	{
		if ((ft_char(xtype[number % 16])) == -1)
			return (-1);
//		size++;
	}
	else if (number > 1)
	{
		size = ft_hexadec(number / 16, xtype);
		if (size == -1 || ft_hexadec(number % 16, xtype) == -1)
			return (-1);
	}
	size++;
	return (size);
}
