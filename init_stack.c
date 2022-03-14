/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 03:44:44 by ayblin            #+#    #+#             */
/*   Updated: 2022/03/13 04:52:47 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *init_stack(char **val)
{
	t_stack *stack;
	t_elem	*elem;
	t_elem	*prev_tmp;
	int		i;
	
	stack = (t_stack *)malloc(sizeof(t_stack));
	if(!stack)
		return (NULL);
	prev_tmp = NULL;
	i = -1;
	while (val[++i])
	{
		elem = my_lstnew(ft_atoi(val[i]));
		if (!elem)
			return (NULL);
		if (!prev_tmp)
			stack->a = elem;
		else
			prev_tmp->next
		
	}
}