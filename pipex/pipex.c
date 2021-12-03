/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:39:35 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/03 20:24:15 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1. Error management; create a function to manage all possibilities using perror.
// 2. Probar comandos existen con access.
// 3. Crear pipes y pasarle los argumentos.

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	char	*path1;
	char	*path2;
	int		fd1;
	int		fd2;

	if (argc != 5)
		ft_error_mgt(22);
	else
	{
		if (!(path1 = ft_cmd_exist(argv[2], envp)))
			ft_error_mgt(3);
		if (!(path2 = ft_cmd_exist(argv[3], envp)))
			ft_error_mgt(3);
		if ((fd1 = open(argv[1], O_RDONLY)) < 0)
		{
			if (access(argv[1], F_OK) != 0)
				ft_error_mgt(2);
			else
				ft_error_mgt(13);
		}
	}
	return (0);
}
