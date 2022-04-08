/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:50:18 by ayblin            #+#    #+#             */
/*   Updated: 2022/04/08 17:50:20 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*duplicate(t_list *lst)
{
	t_list	*to_clone;
	t_list	*res;

	to_clone = lst;
	res = ft_lstnew(lst->content);
	to_clone = to_clone->next;
	while (to_clone)
	{
		ft_lstadd_back(&res, ft_lstnew(to_clone->content));
		to_clone = to_clone->next;
	}
	return (res);
}
