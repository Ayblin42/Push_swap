/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:52:30 by ayblin            #+#    #+#             */
/*   Updated: 2022/04/08 17:52:34 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*op_pa(t_stack *stack)
{
	t_elem	*temp;

	if (!stack->b)
		return (NULL);
	temp = stack->b;
	if (temp->next)
		temp->next->prev = NULL;
	stack->b = temp->next;
	if (stack->a)
	{
		temp->next = stack->a;
		temp->next->prev = temp;
	}
	else
		temp->next = NULL;
	stack->a = temp;
	stack->a_len += 1;
	stack->b_len -= 1;
	stack->a_end = my_lstlast(stack->a);
	stack->b_end = my_lstlast(stack->b);
	set_pos(stack);
	return ("pa\n");
}

char	*op_pb(t_stack *stack)
{
	t_elem	*temp;

	if (!stack->a)
		return (NULL);
	temp = stack->a;
	if (temp->next)
		temp->next->prev = NULL;
	stack->a = temp->next;
	if (stack->b != NULL)
	{
		temp->next = stack->b;
		temp->next->prev = temp;
	}
	else
		temp->next = NULL;
	stack->b = temp;
	stack->b_len += 1;
	stack->a_len -= 1;
	stack->a_end = my_lstlast(stack->a);
	stack->b_end = my_lstlast(stack->b);
	set_pos(stack);
	return ("pb\n");
}

void	set_pos(t_stack *stack)
{
	int		i;
	t_elem	*tmp;

	i = 0;
	tmp = stack->a;
	while (tmp)
	{
		tmp->pos = i;
		i++;
		tmp = tmp->next;
	}
	i = 0;
	tmp = stack->b;
	while (tmp)
	{
		tmp->pos = i;
		i++;
		tmp = tmp->next;
	}
}
