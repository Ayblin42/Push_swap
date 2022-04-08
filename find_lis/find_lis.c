/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_lis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:50:24 by ayblin            #+#    #+#             */
/*   Updated: 2022/04/08 17:50:26 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_uplist	*find_lis(int *tab, int size)
{
	int			i;
	t_uplist	*ulst;

	ulst = ft_uplstnew(ft_lstnew(tab[0]));
	i = 1;
	while (i < size)
	{
		if (sup_ends(ulst, tab[i]))
			clone_sup(ulst, tab[i]);
		else
			between_ends(ulst, tab[i]);
		i++;
	}
	return (ulst);
}
