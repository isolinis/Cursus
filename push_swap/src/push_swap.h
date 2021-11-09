/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:25:40 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/07 18:13:08 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../../Libft/libft.h"

char	**ft_map_argv(int argc, char **argv);
void	ft_format_check(char *arg);
int		ft_is_signed_digit(char c, char next_c);
typedef struct s_stack
{
	t_list	*head;
	t_list	*tail;
}	t_stack;

#endif
