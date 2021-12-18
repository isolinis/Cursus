/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:39:35 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/08 15:20:45 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1. Error management; create a function
// to manage all possibilities using perror.
// 2. Probar comandos existen con access.
// 3. Crear pipes y pasarle los argumentos.

#include <unistd.h>
#include "pipex.h"
#include "../Libft/libft.h"

void	ft_free_struct(t_data data)
{
	ft_free_array(data.cmd1);
	ft_free_array(data.cmd2);
	ft_free_array(data.routes1);
	ft_free_array(data.routes2);
}

void	ft_final_routes(char **argv, char **envp, t_data *data)
{
	char	*path;
	char	**routes;

	path = ft_create_route(envp);
	routes = ft_get_routes(path);
	data -> routes1 = ft_get_com_routes(argv[2], routes);
	path = ft_create_route(envp);
	routes = ft_get_routes(path);
	data -> routes2 = ft_get_com_routes(argv[3], routes);
	data -> path1 = ft_cmd_exist(data -> routes1);
	data -> path2 = ft_cmd_exist(data -> routes2);
}

int	main(int argc, char **argv, char **envp)
{
	t_data	data;

	if (argc != 5)
		ft_error_mgt(22);
	else
	{
		ft_final_routes(argv, envp, &data);
		if (!(data.path1) || !(data.path2))
			ft_error_mgt(3);
		data.fd1 = ft_infile_check(data.fd1, argv[1]);
		data.fd2 = ft_outfile_check(data.fd2, argv[4]);
		data.cmd1 = ft_split(argv[2], ' ');
		data.cmd2 = ft_split(argv[3], ' ');
		ft_create_pipe(data, envp);
		ft_free_struct(data);
	}
	return (0);
}
