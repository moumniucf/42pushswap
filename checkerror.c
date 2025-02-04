/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:03:14 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/04 17:31:38 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **head)
{
	t_stack *tmp;
	while(*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}

t_stack		*medium(t_stack *head)
{
	int size = ft_lstsize(head);
	int mid = size / 2;
	int i = 0;
	while(head && i < mid)
	{
			head=head->next;
			i++;
	}
	return (head);
}

t_stack		*big_node(t_stack *head)
{
	t_stack *big;
	big = head;
	while(head)
	{
		if (head->data > big->data)
		{
			big = head;
		}
		head = head->next;
	}
	return (big);
}
void	rotate_stack_b(t_stack **b, t_stack *node)
{
	if (!ft_lstsize(*b))
		return ;
	if (node->above_median)
	{
		while ((*b)->data != node->data)
			rb(b);
	}
	else
	{
		while ((*b)->data != node->data)
			rrb(b);
	}
}