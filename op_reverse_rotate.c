/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:52:37 by ayblin            #+#    #+#             */
/*   Updated: 2022/04/08 17:52:38 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*op_rra(t_stack *stack)
{
	if (stack->a_len < 2)
		return (NULL);
	stack->a->prev = stack->a_end;
	stack->a_end->next = stack->a;
	stack->a_end->prev->next = NULL;
	stack->a_end->prev = NULL;
	stack->a = stack->a_end;
	stack->a_end = my_lstlast(stack->a);
	set_pos(stack);
	return ("rra\n");
}

char	*op_rrb(t_stack *stack)
{
	if (stack->b_len < 2)
		return (NULL);
	stack->b->prev = stack->b_end;
	stack->b_end->next = stack->b;
	stack->b_end->prev->next = NULL;
	stack->b_end->prev = NULL;
	stack->b = stack->b_end;
	stack->b_end = my_lstlast(stack->b);
	set_pos(stack);
	return ("rrb\n");
}

char	*op_rrr(t_stack *stack)
{
	op_rra(stack);
	op_rrb(stack);
	return ("rrr\n");
}
