/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:21:15 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/06 14:34:32 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*top_b;

	if (!(*b))
		return ;
	top_b = *b;
	*b = top_b->next;
	if (*b)
		(*b)->prev = NULL;
	top_b->next = (*a);
	if (*a)
		(*a)->prev = top_b;
	(*a) = top_b;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*top_a;

	if (!(*a))
		return ;
	top_a = (*a);
	(*a) = top_a->next;
	if (*a)
		(*a)->prev = NULL;
	if (*b)
	{
		(*b)->prev = top_a;
		top_a->next = (*b);
	}
	else
	{
		top_a->next = NULL;
	}
	top_a->prev = NULL;
	(*b) = top_a;
	write(1, "pb\n", 3);
}
