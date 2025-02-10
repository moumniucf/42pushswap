/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorttree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:49:14 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/10 12:22:33 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorttree1(t_stack **head)
{
	int		first;
	int		second;
	int		last;
	t_stack	*small;

	first = (*head)->data;
	second = (*head)->next->data;
	last = (*head)->next->next->data;
	small = small_node(*head);
	if ((small->data) == first)
	{
		if (second > last)
		{
			sa(head);
			ra(head);
		}
	}
}

void	sorttree2(t_stack **head)
{
	int		first;
	int		second;
	int		last;
	t_stack	*small;

	first = (*head)->data;
	second = (*head)->next->data;
	last = (*head)->next->next->data;
	small = small_node(*head);
	if ((small->data) == second)
	{
		if (first > last)
			ra(head);
		else
			sa(head);
	}
}

void	sorttree3(t_stack **head)
{
	int		first;
	int		second;
	int		last;
	t_stack	*small;

	first = (*head)->data;
	second = (*head)->next->data;
	last = (*head)->next->next->data;
	small = small_node(*head);
	if ((small->data) == last)
	{
		if (first < second)
			rra(head);
		else
		{
			ra(head);
			sa(head);
		}
	}
}
