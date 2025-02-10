/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortfive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:34:06 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/10 12:42:10 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortfive_1(t_stack **head, t_stack **b)
{
	int		second;
	t_stack	*small;

	second = (*head)->next->data;
	small = small_node(*head);
	if ((small->data) == ((*head)->data))
	{
		pb(head, b);
		sortfour(head, b);
		pa(head, b);
	}
	else if ((small->data) == second)
	{
		sa(head);
		pb(head, b);
		sortfour(head, b);
		pa(head, b);
	}
}

void	sortfive_2(t_stack **head, t_stack **b)
{
	int		last;
	int		four;
	t_stack	*small;

	last = (*head)->next->next->data;
	four = (*head)->next->next->next->data;
	small = small_node(*head);
	if ((small->data) == last)
	{
		ra(head);
		ra(head);
		pb(head, b);
		sortfour(head, b);
		pa(head, b);
	}
	else if ((small->data) == four)
	{
		rra(head);
		rra(head);
		pb(head, b);
		sortfour(head, b);
		pa(head, b);
	}
}

void	sortfive_3(t_stack **head, t_stack **b)
{
	int		five;
	t_stack	*small;

	five = (*head)->next->next->next->next->data;
	small = small_node(*head);
	if ((small->data) == five)
	{
		rra(head);
		pb(head, b);
		sortfour(head, b);
		pa(head, b);
	}
}
