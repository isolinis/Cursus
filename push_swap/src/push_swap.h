/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:25:40 by jsolinis          #+#    #+#             */
/*   Updated: 2021/11/21 19:33:20 by jsolinis         ###   ########.fr       */
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
t_list	*ft_reverse_rotate(t_list *stack);
void	ft_swap_stack_inc(t_list **stack_a, t_list **stack_b);
void	ft_rotate_stack_inc(t_list **stack_a, t_list **stack_b);
void	ft_reverse_rotate_inc(t_list **stack_a, t_list **stack_b);
int		ft_get_argsize(char **args);
int		ft_is_ordered(t_list *stack);
void	ft_sort_list(t_list **stack_a, t_list **stack_b, int size);
void	ft_sortof_three(t_list **stack);
void	ft_sortof_five(t_list **stack_src, t_list **stack_dst, int size);
void	ft_case_one(t_list **stack);
void	ft_case_two(t_list **stack);
void	ft_case_three(t_list **stack);
void	ft_case_extra(t_list **stack);
void	ft_case_double_rra(t_list **stack);
void	ft_case_double_ra(t_list **stack);
int		ft_find_min(t_list *aux, int min);
int		ft_find_pos(t_list *aux, int iteration, int min);
void	ft_push_til_three(t_list **stack, int iteration, int size);
t_list	*ft_before_lstlast(t_list *stack);

#endif
