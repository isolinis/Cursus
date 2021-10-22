/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:34:04 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/01 11:26:19 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	ui_c;

	ui_c = (unsigned char) c;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
