/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:03:54 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/12 10:39:27 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack **head)
{
	t_stack	*last;

	if (!head || !(*head)->next || !(*head))
		return ;
	last = ft_lstlast(*head);
	last->prev->next = NULL;
	last->next = (*head);
	last->prev = NULL;
	(*head)->prev = last;
	(*head) = last;
}

void	rra(t_stack **a)
{
	rev_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rev_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
	write(1, "rrr\n", 4);
}
