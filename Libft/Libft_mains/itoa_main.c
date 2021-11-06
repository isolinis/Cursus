/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:43:17 by jsolinis          #+#    #+#             */
/*   Updated: 2021/06/25 12:25:56 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *str1 = ft_itoa(-623);
	char *str2 = ft_itoa(156);
	char *str3 = ft_itoa(-2147483647 -1);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);

	return (0);
}
