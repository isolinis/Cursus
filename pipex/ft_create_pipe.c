/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_pipe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:54:59 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/03 20:08:02 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_create_pipe(void)
{
	int	fd1[2];
	int fd2[2];
	int	status;
	int	pid;

	pipe(fd1);
	pid = fork();
	if (pid == 0)
	{
		close(fd1[0]);
		dup2(fd1[1], 1);
		close(fd[1]);
		execve("/bin/ls", "ls", "-l", NULL);
	}
	else
	{
		close(fd1[1]);
		pipe(fd2);
		pid = fork();
		if (pid == 0)
		{
			close(fd2[0]);
			dup2(int
		}
		else
		{

		}
	}
}
