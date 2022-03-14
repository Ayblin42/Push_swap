/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 03:36:15 by ayblin            #+#    #+#             */
/*   Updated: 2022/03/13 04:52:50 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_elem	*my_lstnew(int	val)
{
	t_elem *new;
	new = (t_elem *)malloc(sizeof(t_elem));
	if (!new)
		return (NULL);
	new->val = val;
	return (new);
}