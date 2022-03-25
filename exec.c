/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigel <rigel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 01:11:28 by rigel             #+#    #+#             */
/*   Updated: 2022/03/23 02:02:21 by rigel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	same_sign(int mva, int mvb, t_stack *stack)
{
	if (mva < 0)
	{
		op_rrs(stack);
		mva = mva+ 1;
		mvb += 1;
	}
	else
	{
		op_rs(stack);
		mva -= 1;
		mvb -= 1;
	}
}

void	dif_sign(int mva, int mvb, t_stack *stack)
{
	if (mva < 0)
	{
		op_rra(stack);
		mva++;
	}
	if (mva > 0)
	{
		op_ra(stack);
		mva--;
	}
	if (mvb < 0)
	{
		op_rrb(stack);
		mvb++;
	}
	if (mvb > 0)
	{
		op_rb(stack);
		mvb--;
	}
}
