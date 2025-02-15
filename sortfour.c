/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortfour.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:25:32 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/15 11:00:10 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortfour_1(t_stack **head, t_stack **b)
{
	t_stack	*small;
	int		last;

	last = (*head)->next->next->data;
	small = small_node(*head);
	if ((small->data) == last)
	{
		rra(head);
		rra(head);
		pb(head, b);
		sortthree(head);
		pa(head, b);
	}
}

void	sortfour_2(t_stack **head, t_stack **b)
{
	t_stack	*small;
	int		first;
	int		second;

	first = (*head)->data;
	second = (*head)->next->data;
	small = small_node(*head);
	if ((small->data) == first)
	{
		pb(head, b);
		sortthree(head);
		pa(head, b);
	}
	else if ((small->data) == second)
	{
		sa(head);
		pb(head, b);
		sortthree(head);
		pa(head, b);
	}
}

void	sortfour_3(t_stack **head, t_stack **b)
{
	t_stack	*small;
	int		four;

	small = small_node(*head);
	four = (*head)->next->next->next->data;
	if ((small->data) == four)
	{
		rra(head);
		pb(head, b);
		sortthree(head);
		pa(head, b);
	}
}
