/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 09:44:51 by jsolinis          #+#    #+#             */
/*   Updated: 2021/07/01 11:12:32 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	ui_c;

	ui_c = (unsigned char) c;
	if (ft_isalpha(c))
		return (1);
	else if (ft_isdigit(c))
		return (1);
	else
		return (0);
}
