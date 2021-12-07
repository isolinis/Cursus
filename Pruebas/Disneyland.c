/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Disneyland.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:44:45 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/05 18:15:55 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// This is a test program to play around with signals as seen in CS110 Lecture 6

#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

static const size_t kNumChildren = 5;
static size_t numDone = 0;

static void	reapChild(int unused)
{
	waitpid(-1, NULL, 0);
	numDone++;
}

int	main(int argc, char *argv[])
{
	size_t	kid;

	kid = 1;
	printf("Let my five children play while I take a nap.\n");
	signal(SIGCHLD, reapChild);
	while (kid <= kNumChildren)
	{
		if (fork() == 0)
		{
			sleep(3 * kid);
			printf("Child #%zu tired... returns to dad.\n", kid);
		}
		kid++;
		while (numDone < kNumChildren)
		{
			printf("At least one child still playing, so dad nods off.\n");
			sleep(5);
			printf("Dad wakes up!");
		}
		printf("All children accounted for. Good job, dad!\n");
		return (0);
	}
}
