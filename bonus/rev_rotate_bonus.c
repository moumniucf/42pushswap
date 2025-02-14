/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:30:08 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/14 17:02:33 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rev_rotate(t_stack **head)
{
	int		size;
	t_stack	*last;

	size = ft_lstsize(*head);
	if (size < 2)
		return ;
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
}

void	rrb(t_stack **b)
{
	rev_rotate(b);
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
}
