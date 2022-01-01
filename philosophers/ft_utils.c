/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:16:38 by mtitan            #+#    #+#             */
/*   Updated: 2021/12/10 16:16:39 by mtitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_timer(int st)
{
	struct timeval	ct;

	gettimeofday(&ct, NULL);
	return ((ct.tv_sec * 1000 + ct.tv_usec / 1000) - st);
}

void	ft_sleep(int time)
{
	time_t	start;
	time_t	end;

	start = ft_timer(0);
	end = ft_timer(0) + time;
	while (start < end)
	{
		usleep(500);
		start = ft_timer(0);
	}
}
