/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayblin <ayblin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 03:26:21 by ayblin            #+#    #+#             */
/*   Updated: 2022/03/14 10:21:03 by ayblin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>

typedef struct s_elem
{
	int				val;
	int				level;
	struct s_elem	*next;
	struct s_elem	*prev;
}	t_elem;

typedef struct s_stack
{
	struct s_elem	*a;
	struct s_elem	*a_end;
	int				a_len;

	struct s_elem	*b;
	struct s_elem	*b_end;
	int				b_len;	
}	t_stack;

int			ft_atoi(const char *nptr);

t_elem		*my_lstnew(int val);
void		my_lst_print(t_elem *lst);

t_stack		*init_stack(char **val);

#endif