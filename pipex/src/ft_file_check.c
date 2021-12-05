/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:55:13 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/05 20:39:25 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "pipex.h"

int	ft_infile_check(int fd, char *arg)
{
	fd = open(arg, O_RDONLY);
	if (fd < 0)
	{
		if (access(arg, F_OK) != 0)
			ft_error_mgt(2);
		else
			ft_error_mgt(13);
	}
	return (fd);
}

int	ft_outfile_check(int fd, char *arg)
{
	fd = open(arg, O_WRONLY | O_TRUNC | O_CREAT, 0777);
	if (fd < 0)
		ft_error_mgt(13);
	return (fd);
}
