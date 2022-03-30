/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigel <rigel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 05:39:41 by rigel             #+#    #+#             */
/*   Updated: 2022/03/22 19:17:09 by rigel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_three(t_stack *stack)
{
	t_elem *l;
	l = stack->a;
	if(l->lvl > l->next->lvl && l->next->lvl < l->next->next->lvl && l->lvl < l->next->next->lvl)
		ft_putstr(op_sa(stack));
	else if(l->lvl > l->next->lvl && l->next->lvl > l->next->next->lvl && l->lvl > l->next->next->lvl)
	{
		ft_putstr(op_sa(stack));
		ft_putstr(op_rra(stack));
	}
	else if(l->lvl > l->next->lvl && l->next->lvl < l->next->next->lvl && l->lvl > l->next->next->lvl)
		ft_putstr(op_ra(stack));
	else if(l->lvl < l->next->lvl && l->next->lvl > l->next->next->lvl && l->lvl < l->next->next->lvl)
	{
		ft_putstr(op_sa(stack));
		ft_putstr(op_ra(stack));
	}
	else if(l->lvl < l->next->lvl && l->next->lvl > l->next->next->lvl && l->lvl > l->next->next->lvl)
		ft_putstr(op_rra(stack));
}

static void	sort_four(t_stack *stack)
{
	int	coord[2];

	ft_putstr(op_pb(stack));
	sort_three(stack);
	mv_tab(stack, stack->b, coord);
	exec_tab(coord[0], coord[1], stack);
}

void    sort_five(t_stack *stack)
{
	int	coord[2];

	if(stack->a_len == 2)
		ft_putstr(op_ra(stack));
	else if(stack->a_len == 3)
		sort_three(stack);
	else if (stack->a_len == 4)
		sort_four(stack);
	else
	{
		ft_putstr(op_pb(stack));
		ft_putstr(op_pb(stack));
		sort_three(stack);
		mv_tab(stack, stack->b, coord);
		exec_tab(coord[0], coord[1], stack);
		mv_tab(stack, stack->b, coord);
		exec_tab(coord[0], coord[1], stack);
	}
}
