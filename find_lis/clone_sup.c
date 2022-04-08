/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clone_sup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:50:11 by ayblin            #+#    #+#             */
/*   Updated: 2022/04/08 17:50:13 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*longest_list(t_uplist *ulst)
{
	int		tmp;
	t_list	*ret;

	tmp = 0;
	while (ulst)
	{
		if (ft_lstsize(ulst->lst) > tmp)
		{
			tmp = ft_lstsize(ulst->lst);
			ret = ulst->lst;
		}
		ulst = ulst->next;
	}
	return (ret);
}

void	clone_sup(t_uplist *ulst, int nb)
{
	t_list		*new;
	t_list		*longest;
	t_uplist	*unew;

	longest = duplicate(longest_list(ulst));
	new = ft_lstnew(nb);
	ft_lstadd_back(&longest, new);
	unew = ft_uplstnew(longest);
	ft_uplstadd_back(&ulst, unew);
}
