/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:13:58 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/30 20:13:30 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void ft_cmd_exists(char	*cmd)
{
	//int fd1;
	//int fd2;
	char *str;

	str = (char *) malloc(sizeof("/sbin/") + sizeof(cmd) + 1);
	str = strcat(cmd, "/sbin/");
	printf("%s\n", str);
	/*fd1 = access(strcat("/sbin/", cmd), F_OK);
	fd2 = access(strcat("/usr/sbin/", cmd), F_OK);
	if (fd1 == -1)
		perror("Error description");
	else if (fd2 == -1)
		perror("Error description");
	else
		printf("No error");*/
}

int main(int argc, char **argv)
{
	if (argc != 5)
		exit(0);
	ft_cmd_exists(argv[2]);
	return (0);
}
