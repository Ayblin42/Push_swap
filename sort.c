/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigel <rigel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:58:55 by rigel             #+#    #+#             */
/*   Updated: 2022/03/23 02:02:27 by rigel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mv_tab(t_stack *stack, t_elem *lst_b, int *coord)
{
	if (lst_b->pos > (stack->b_len / 2))
		coord[1] = lst_b->pos - stack->b_len;
	else
		coord[1] = lst_b->pos;
	if (find_next_pos(stack->a, lst_b->lvl) == -1)
	{
		if (find_prev_pos(stack->a, lst_b->lvl) > stack->a_len)
			coord[0] = (find_prev_pos(stack->a, lst_b->lvl) - stack->a_len);
		else
			coord[0] = find_prev_pos(stack->a, lst_b->lvl);
	}
	else if (find_next_pos(stack->a, lst_b->lvl) > (stack->a_len / 2))
		coord[0] = find_next_pos(stack->a, lst_b->lvl) - stack->a_len;
	else if (find_next_pos(stack->a, lst_b->lvl) <= (stack->a_len / 2))
		coord[0] = find_next_pos(stack->a, lst_b->lvl);
}

int	mv_calcul(int *tab)
{
	if (tab[1] * tab[0] > 0)
		return (max(tab));
	else
		return (abs(tab[0]) + abs(tab[1]));
}

void	sort(t_stack *stack, t_list *lis)
{
	int			coord[2];
	int			tmp[2];
	int			min;
	t_elem		*lst_b;

	push_lis(stack, lis);
	while (stack->b)
	{
		lst_b = stack->b;
		mv_tab(stack, lst_b, coord);
		min	= mv_calcul(coord);
		while(lst_b)
		{
			mv_tab(stack, lst_b, tmp);
			// printf("calc:%d <min:%d \n", mv_calcul(coord), min);
			// fflush(stdout);
			if (mv_calcul(tmp) < min)
			{
				// printf("{%d,%d}\n",coord[0], coord[1]);
				// fflush(stdout);
				min = mv_calcul(tmp);
				mv_tab(stack, lst_b, coord);
				// printf("2{%d,%d}\n",coord[0], coord[1]);
				// fflush(stdout);
			}
			lst_b = lst_b->next;
		}
		// print_stacks(stack);
		// printf("3{%d,%d}\n",coord[0], coord[1]);
		// fflush(stdout);
		exec_tab(coord[0],coord[1], stack);
		// printf("NEXT\n");
		// fflush(stdout);
	}
}

void	exec_tab(int mva, int mvb, t_stack *stack)
{
	while (mva != 0 || mvb != 0)
	{
		if ((mva * mvb) > 0)
		{
			if (mva < 0)
			{
				ft_putstr(op_rrr(stack));
				mva = mva+ 1;
				mvb += 1;
			}
			else
			{
				ft_putstr(op_rr(stack));
				mva -= 1;
				mvb -= 1;
			}
		}
		else
		{
			if (mva < 0)
			{
				ft_putstr(op_rra(stack));
				mva++;
			}
			if (mva > 0)
			{
				ft_putstr(op_ra(stack));
				mva--;
			}
			if (mvb < 0)
			{
				ft_putstr(op_rrb(stack));
				mvb++;
			}
			if (mvb > 0)
			{
				ft_putstr(op_rb(stack));
				mvb--;
			}
		}
	}
	ft_putstr(op_pa(stack));
}
