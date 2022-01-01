/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtitan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 16:16:22 by mtitan            #+#    #+#             */
/*   Updated: 2021/12/10 16:16:23 by mtitan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

static int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	k;
	int	n;

	i = 0;
	k = 1;
	n = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		k = -k;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		n = n * 10 + (str[i++] - '0');
		if (n < 0)
		{
			if (k < 0)
				return (0);
			return (-1);
		}
	}
	return ((int)n * k);
}
