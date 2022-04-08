/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sup_ends.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:50:30 by ayblin            #+#    #+#             */
/*   Updated: 2022/04/08 17:50:33 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sup_ends(t_uplist *ulst, int lvl)
{
	t_uplist	*utmp;
	t_list		*tmp;

	utmp = ulst;
	while (utmp)
	{
		tmp = ft_lstlast(utmp->lst);
		if (tmp->content > lvl)
			return (FALSE);
		utmp = utmp->next;
	}
	return (TRUE);
}
