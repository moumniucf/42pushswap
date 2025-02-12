/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortthree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:34:29 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/12 15:31:11 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortthree1(t_stack **head)
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

void	sortthree2(t_stack **head)
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

void	sortthree3(t_stack **head)
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
