/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isolate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:10:07 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/18 23:30:52 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fdf.h"
#include "../Libft/libft.h"
#include "../mlx/mlx.h"

int key_hook(int keycode, t_vars *vars)
{
	if (keycode == 53)
	{
		mlx_destroy_window(vars -> mlx, vars -> win);
//		system("leaks fdf");
		exit(0);
	}
	return (0);
}

int close_win(t_vars *vars)
{
	mlx_destroy_window(vars -> mlx, vars -> win);
	exit(0);
}

int	ft_has_comma(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ',')
			return (1);
		i++;
	}
	return (0);
}

void	ft_isolate(char *aux, t_vars *vars, int y)
{
	char	**tmp;
	char	**tmp1;
	int		x;

	if (!vars && !y)
		exit(0);
	tmp = ft_split(aux, ' ');
	x = 0;
	vars->map.coords[y] = (int *) malloc(vars->map.width * sizeof(int));
	while (tmp[x])
	{
		if (ft_has_comma(tmp[x]))
		{
			tmp1 = ft_split(tmp[x], ',');
			vars->map.coords[y][x] = ft_atoi(tmp1[0]);
			vars->map.color = ft_atoi(tmp1[1]);
			free(tmp1[0]);
			free(tmp1[1]);
		}
		else
			vars->map.coords[y][x] = ft_atoi(tmp[x]);
		free(tmp[x++]);
	}
	vars->map.x_max = x - 1;
	free(tmp);
}
