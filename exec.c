/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:51:57 by ayblin            #+#    #+#             */
/*   Updated: 2022/04/08 17:51:59 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	same_sign(int *mva, int *mvb, t_stack *stack)
{
	if (*mva < 0)
	{
		ft_putstr(op_rrr(stack));
		*mva = *mva + 1;
		*mvb += 1;
	}
	else
	{
		ft_putstr(op_rr(stack));
		*mva -= 1;
		*mvb -= 1;
	}
}

void	diff_sign(int *mva, int *mvb, t_stack *stack)
{
	if (*mva < 0)
	{
		ft_putstr(op_rra(stack));
		(*mva)++;
	}
	if (*mva > 0)
	{
		ft_putstr(op_ra(stack));
		(*mva)--;
	}
	if (*mvb < 0)
	{
		ft_putstr(op_rrb(stack));
		(*mvb)++;
	}
	if (*mvb > 0)
	{
		ft_putstr(op_rb(stack));
		(*mvb)--;
	}
}
