/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paint_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:10:02 by jsolinis          #+#    #+#             */
/*   Updated: 2021/10/07 18:00:25 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

void	ft_paint_nbr(int i)
{
	if (i == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}	
	if (i < 0)
	{
		ft_putchar('-');
		i *= -1;
	}
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		i = i % 10;
	}
	if (i < 10)
	{
		ft_putchar(i + '0');
	}
}
