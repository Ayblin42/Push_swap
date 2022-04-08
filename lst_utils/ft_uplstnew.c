/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uplstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:51:34 by ayblin            #+#    #+#             */
/*   Updated: 2022/04/08 17:51:37 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_uplist	*ft_uplstnew(t_list *lst)
{
	t_uplist	*new;

	new = (t_uplist *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->lst = lst;
	new->next = NULL;
	return (new);
}
