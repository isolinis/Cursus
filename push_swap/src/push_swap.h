/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:25:40 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/14 01:58:48 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../../Libft/libft.h"

char	**ft_map_argv(int argc, char **argv);
char	**ft_multi_arg(int argc, char **argv);
void	ft_format_check(char *arg);
int		ft_is_signed_digit(char c, char next_c);
t_list	*ft_create_stack(t_list *stack, char **argv);
void	ft_print_stack(t_list *stack);
void	ft_isdupe(t_list *stack);
void	ft_swap(int *a, int *b);
void	ft_swap_stack(t_list **stack);
void	ft_rotate_stack(t_list **stack);
void	ft_push_stack(t_list **stack_src, t_list **stack_dst);
void	ft_reverse_rotate(t_list **stack);
void	ft_swap_stack_inc(t_list **stack_a, t_list **stack_b);
void	ft_rotate_stack_inc(t_list **stack_a, t_list **stack_b);
void	ft_reverse_rotate_inc(t_list **stack_a, t_list **stack_b);

#endif
