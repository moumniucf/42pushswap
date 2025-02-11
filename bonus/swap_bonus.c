/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:56:43 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/11 18:01:31 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
}

void	sb(t_stack **b)
{
	if (!(*b) || !(*b)->next)
		return ;
	sw_ap(b);
}

void	ss(t_stack **a, t_stack **b)
{
	if (!(*a) || !(*a)->next || !(*b) || !(*b)->next)
		return ;
	sw_ap(a);
	sw_ap(b);
}