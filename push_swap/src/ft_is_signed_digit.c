/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_signed_digit.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:46:48 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/27 20:36:48 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_signed_digit(char c, char next_c)
{
	if ((c == '-' || c == '+') && (next_c >= '0' && next_c <= '9'))
		return (1);
	return (0);
}
