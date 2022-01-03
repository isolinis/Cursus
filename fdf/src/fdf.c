/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 13:01:44 by jsolinis          #+#    #+#             */
/*   Updated: 2022/01/03 16:48:26 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include "fdf.h"
#include "../mlx/mlx.h"

void	ft_genesis(t_vars *vars)
{
	vars->img = mlx_new_image(vars->mlx, 1920, 1080);
	vars->addr = mlx_get_data_addr(vars->img,
			&vars->bits_per_pixel, &vars->line_length, &vars->endian);
	ft_paint(vars);
	mlx_put_image_to_window(vars->mlx, vars->win, vars->img, 0, 0);
}

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
	vars.win = mlx_new_window(vars.mlx, 1920, 1080, "FDF");
	if (vars.win == NULL)
		write(1, "Error de generación de ventana", 30);
	vars.map.x_start = 0;
	ft_genesis(&vars);
	mlx_key_hook(vars.win, key_hook, &vars);
	mlx_hook(vars.win, 17, 1L << 8, close_win, &vars);
	mlx_loop(vars.mlx);
	return (0);
}
