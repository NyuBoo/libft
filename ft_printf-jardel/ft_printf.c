/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:13:16 by jade-car          #+#    #+#             */
/*   Updated: 2023/12/14 13:58:18 by yanaranj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_formatter(char format, va_list argptr)
{
	int	mida;

	mida = 0;
	if (format == 'c')
		mida += ft_char(va_arg(argptr, int));
	else if (format == 's')
		mida += ft_string(va_arg(argptr, char *));
	else if (format == 'p')
		mida += ft_pointer(va_arg(argptr, unsigned long), "0123456789abcdef");
	else if (format == 'i' || format == 'd')
		mida += ft_interger(va_arg(argptr, int));
	else if (format == 'x')
		mida += ft_hexadec(va_arg(argptr, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		mida += ft_hexadec(va_arg(argptr, unsigned int), "0123456789ABCDEF");
	else if (format == 'u')
		mida += ft_unsigned(va_arg(argptr, unsigned int));
	else if (format == '%')
		return (write(1, "%", 1));
	return (mida);
}

int	ft_printf(const char *onscreen, ...)
{
	int		i;
	int		mida;
	va_list	argptr;

	va_start (argptr, onscreen);
	i = 0;
	mida = 0;
	while (onscreen[i])
	{
		if (onscreen[i] == '%')
		{
			mida += ft_formatter(onscreen[i + 1], argptr);
			if (mida == -1)
				return (-1);
			i++;
		}
		else
		{
			if (write(1, &onscreen[i], 1) == -1)
				return (-1);
			mida ++;
		}
		if (onscreen[i])
			i++;
	}
	va_end (argptr);
	return (mida);
}

int main()
{

	char	c = 'H';
	char	*str = "Yajaira";
	int		p = 14523;
	int		i = 0;
	int		digit = 0;
	unsigned int		x = 4294967295;
	unsigned int		X = 4294967286;
	unsigned int		u = 4294967295;
	int		*ptr = &p;

	int org = 0;
	int mine = 0;

	org = printf("Org:\n%c\n%s\n%p\n%i\n%d\n%x\n%X\n%u\n%%\n", c, str, (void*)ptr, i, digit, x, X, u);
	printf("-----------------\n");
	mine = ft_printf("Mio:\n%c\n%s\n%p\n%i\n%d\n%x\n%X\n%u\n%%\n", c, str, (void*)ptr, i, digit, x, X, u );

//	org = printf("O:%u\n", u);
//	mine = ft_printf("M:%u\n", u);
//	org = printf("O:%p\n", (void *)-14523);
//	mine = ft_printf("M:%p\n", (void *)-14523);

	printf("res:%d\nres:%d\n", org, mine);

	return (0);
}
