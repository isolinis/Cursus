/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsolinis <jsolinis@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:30:00 by jsolinis          #+#    #+#             */
/*   Updated: 2022/03/21 20:02:26 by jsolinis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <sys/time.h>

typedef struct s_diner
{
	int				philos;
	int				ttdie;
	int				tteat;
	int				ttsleep;
	int				eat_nbr;
	int				tid;
	int				leave;
	int				ready;
	int				*fork_taken;
	pthread_t		*thread;
	pthread_mutex_t	*fork;
	pthread_mutex_t	go;
	pthread_mutex_t	message;
	pthread_mutex_t	identify;
}	t_diner;

typedef struct s_philo
{
	int				tid;
	int				lm;
	int				dishes;
	int				right_fork;
	int				left_fork;
	struct timeval	current;
	struct timeval	sit;
	struct timeval	lastdish;
	t_diner			*diner;
}	t_philo;

/*-----------FUNCTIONS ARGS MNGMNT RELATED-----------------*/

int		ft_arg_check(int argc, char **argv, t_diner *diner);
int		ft_get_arguments(t_diner *diner, int argc, char **argv);

/*-------------FUNCTIONS ACTIONS RELATED--------------------*/

int		ft_right_fork(t_philo *philo);
void	ft_take_fork(t_philo *philo, int fork);
void	ft_serve_dish(t_philo *philo);
void	ft_start_routine(t_philo *philo);

/*--------------FUNCTIONS LIFE RELATED---------------------*/

int		ft_time_to_leave(t_philo *philo);

/*--------------FUNCTIONS TIME RELATED---------------------*/

int		ft_time_machine(struct timeval start);
void	ft_usleep_adjusted(t_philo *philo, int seconds);
void	ft_print_message(t_philo *philo, char *action);

#endif
