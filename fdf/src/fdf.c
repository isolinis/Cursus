/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:01:44 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/18 22:58:18 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "fdf.h"
#include "../mlx/mlx.h"

int	main(int argc, char **argv)
{
	t_vars	vars;

	if (argc != 2)
		exit(0);
	ft_get_map(&vars, argv[1]);
	ft_store_contents(&vars, argv[1]);
	vars.mlx = mlx_init();
	if (vars.mlx == NULL)
		write(1, "Error de inicialización", 23);
	vars.win = mlx_new_window(vars.mlx, 2000, 1000, "FDF");
	if (vars.win == NULL)
		write(1, "Error de generación de ventana", 30);
	ft_paint(&vars);
	mlx_key_hook(vars.win, key_hook, &vars);
	mlx_hook(vars.win, 17, 1L << 8, close_win, &vars);
	mlx_loop(vars.mlx);
	return (0);
}
