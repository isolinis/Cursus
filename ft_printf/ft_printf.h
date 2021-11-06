/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 20:14:41 by jsolinis          #+#    #+#             */
/*   Updated: 2021/10/16 21:06:13 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		ft_convert(char c, va_list args);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putptr(uintptr_t ptr);
int		ft_putnbr(int i);
void	ft_paint_nbr(int i);
int		ft_cntnbr(int i);
int		ft_putnbr_u(unsigned int i);
int		ft_puthex(uintptr_t i, char c);

#endif
