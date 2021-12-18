/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_pipe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:54:59 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/11 14:01:04 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include "pipex.h"

int	ft_create_child1(t_data data, char **envp, int fd[])
{
	int	pid;

	pid = fork();
	if (pid < 0)
	{
		perror("fork failed");
		exit(EXIT_FAILURE);
	}
	if (pid == 0)
	{
		if (data.fd1 == -1)
			exit(1);
		dup2(data.fd1, 0);
		dup2(fd[1], 1);
		close(fd[1]);
		close(fd[0]);
		close(data.fd1);
		execve(data.path1, data.cmd1, envp);
		exit(0);
	}
	return (pid);
}

int	ft_create_child2(t_data data, char **envp, int fd[])
{
	int	pid;

	pid = fork();
	if (pid < 0)
		ft_error_mgt(10);
	if (pid == 0)
	{
		dup2(fd[0], 0);
		dup2(data.fd2, 1);
		close(fd[0]);
		close(fd[1]);
		close(data.fd2);
		execve(data.path2, data.cmd2, envp);
		exit(0);
	}
	return (pid);
}

void	ft_create_pipe(t_data data, char **envp)
{
	int	fd[2];
	int	pid1;
	int	pid2;
	int	stt;
	int	status;

	if (pipe(fd) == -1)
		ft_error_mgt(32);
	pid1 = ft_create_child1(data, envp, fd);
	pid2 = ft_create_child2(data, envp, fd);
	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, &stt, 0);
	waitpid(pid2, &stt, 0);
	if (WIFEXITED(stt))
		status = WEXITSTATUS(stt);
}
