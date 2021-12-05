/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:39:35 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/05 13:35:54 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1. Error management; create a function
// to manage all possibilities using perror.
// 2. Probar comandos existen con access.
// 3. Crear pipes y pasarle los argumentos.

#include <unistd.h>
#include "pipex.h"
#include "../Libft/libft.h"

int	main(int argc, char **argv, char **envp)
{
	t_data	data;

	if (argc != 5)
		ft_error_mgt(22);
	else
	{
		data.path1 = ft_cmd_exist(argv[2], envp);
		data.path2 = ft_cmd_exist(argv[3], envp);
		if (!(data.path1) || !(data.path2))
			ft_error_mgt(3);
		data.fd1 = ft_infile_check(data.fd1, argv[1]);
		if (!(data.path1))
			data.fd1 = 0;
		data.fd2 = ft_outfile_check(data.fd2, argv[4]);
		data.cmd1 = ft_split(argv[2], ' ');
		data.cmd2 = ft_split(argv[3], ' ');
		ft_create_pipe(data, envp);
	}
	return (0);
}
