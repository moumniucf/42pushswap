/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:43:28 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/11 18:53:06 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rotate(t_stack **head)
{
	t_stack	*last;

	if (!(*head) || !(*head)->next || ft_lstsize(*head) == 1)
		return ;
	last = ft_lstlast(*head);
	last->next = (*head);
	(*head) = (*head)->next;
	(*head)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}

void	ra(t_stack **a)
{
	if (!(*a))
		return ;
	rotate(a);
}

void	rb(t_stack **b)
{
	if (!(*b))
		return ;
	rotate(b);
}

void	rr(t_stack **a, t_stack **b)
{
	if (!(*a) || !(*b))
		return ;
	rotate(a);
	rotate(b);
}