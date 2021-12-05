/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_mgt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:43:31 by jsolinis          #+#    #+#             */
/*   Updated: 2021/12/05 13:48:34 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include "pipex.h"

void	ft_error_mgt(int code)
{
	errno = code;
	perror("Error");
}
