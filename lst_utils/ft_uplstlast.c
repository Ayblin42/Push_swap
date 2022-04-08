/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uplstlast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 17:51:28 by ayblin            #+#    #+#             */
/*   Updated: 2022/04/08 17:51:30 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_uplist	*ft_uplstlast(t_uplist *uplst)
{
	t_uplist	*uptmp;

	uptmp = uplst;
	while (uptmp)
	{
		if (uptmp->next == NULL)
			return (uptmp);
		uptmp = uptmp->next;
	}
	return (uptmp);
}
