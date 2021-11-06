/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:07:43 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/01 11:13:53 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint (int c)
{
	unsigned int	ui_c;

	ui_c = (unsigned char) c;
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
