/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:26:51 by jsolinis          #+#    #+#             */
/*   Updated: 2021/10/07 19:21:19 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(char c, va_list args)
{
	int	n;

	n = 0;
	if (c == 'c')
		n = ft_putchar(va_arg(args, int));
	else if (c == '%')
		n = ft_putchar('%');
	else if (c == 's')
		n = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		n = ft_putptr(va_arg(args, uintptr_t));
	else if (c == 'i' || c == 'd')
		n = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		n = ft_putnbr_u(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		n = ft_puthex((va_arg(args, unsigned int)), c);
	return (n);
}
