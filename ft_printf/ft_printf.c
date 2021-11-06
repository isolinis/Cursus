/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:37:11 by jsolinis          #+#    #+#             */
/*   Updated: 2021/10/07 18:49:24 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		j;

	va_start(args, format);
	if (!format)
		return (0);
	i = 0;
	j = 0;
	while (format[i])
	{
		while (format[i] == '%')
		{
			j += ft_convert(format[i + 1], args);
			i += 2;
		}
		if (format[i])
		{
			j += ft_putchar(format[i]);
			i++;
		}
	}
	return (j);
	va_end(args);
}
