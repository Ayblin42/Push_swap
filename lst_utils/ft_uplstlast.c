/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uplstlast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigel <rigel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:24:56 by llepiney          #+#    #+#             */
/*   Updated: 2022/03/17 23:28:11 by rigel            ###   ########.fr       */
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