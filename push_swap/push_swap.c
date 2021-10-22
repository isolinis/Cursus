/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 20:34:17 by jsolinis          #+#    #+#             */
/*   Updated: 2021/10/18 17:42:29 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_format.c"

int	main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "Error", 7);
	if (argc == 2)
		ft_format(argv[1]);
	return (0);
}
