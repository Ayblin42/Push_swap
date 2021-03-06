/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:51:52 by ayblin            #+#    #+#             */
/*   Updated: 2022/04/08 18:47:47 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_int(char *n)
{
	int	i;

	if (ft_atoi(n) < -2147483648 || ft_atoi(n) > 2147483647)
		return (0);
	i = 0;
	if (n[i] == '-')
		i++;
	while (n[i])
	{
		if (n[i] < '0' || n[i] > '9')
			return (0);
		i++;
	}
	return (1);
}		

static int	is_duplicate(char **av)
{
	int		i;
	int		j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	already_sort(char **av)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (av[i + 1] && ft_atoi(av[i]) > ft_atoi(av[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	error_check(char **av)
{
	int	i;

	i = 0;
	if (!av[1])
		return (0);
	if (is_duplicate(av) == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (av[i])
	{
		if (!av[i][0])
			return (0);
		if (!is_int(av[i]))
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	if (already_sort(av))
		return (-1);
	return (1);
}
