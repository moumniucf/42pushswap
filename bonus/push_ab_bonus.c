/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:04:13 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/11 18:01:05 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
}
