/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:43:39 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/27 12:24:40 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sw_ap(t_stack **head)
{
	t_stack	*first;
	t_stack	*second;
	int		tmp;

	if (!(*head) || !(*head)->next)
		return ;
	first = *head;
	second = (*head)->next;
	tmp = first->data;
	first->data = second->data;
	second->data = tmp;
}

void	sa(t_stack **a)
{
	if (!(*a) || !(*a)->next)
		return ;
	sw_ap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	if (!(*b) || !(*b)->next)
		return ;
	sw_ap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	if (!(*a) || !(*a)->next || !(*b) || !(*b)->next)
		return ;
	sw_ap(a);
	sw_ap(b);
	write(1, "ss\n", 3);
}
