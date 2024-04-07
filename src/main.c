/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abentaye <abentaye@student.s19.be >        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:03:11 by aimad             #+#    #+#             */
/*   Updated: 2024/04/07 07:55:28 by abentaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	main(int argc, char **argv)
{
	t_program			program;
	t_philo				philos[MAX_PHILOS];
	pthread_mutex_t	forks[MAX_PHILOS];
	if (argc != 2)
	{
		printf("Error: Wrong number of arguments\n");
		return (1);
	}
	init_program(&program, philos);
	init_forks(forks, ft_atoi(argv[1]));
	return (0);
}
