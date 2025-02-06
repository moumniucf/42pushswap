/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:03:14 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/06 16:06:07 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **head)
{
	t_stack	*tmp;
	t_stack *help;

	if (head == NULL)
		return ;
	help = *head;
	while (help)
	{
		tmp = (help)->next;
		free(help);
		help = tmp;
	}
	head = NULL;
}

void	free_stacks(t_stack **a, t_stack **b)
{
	free_stack(a);
	free_stack(b);
}

t_stack	*medium(t_stack *head)
{
	int	size;
	int	i;
	int	mid;

	size = ft_lstsize(head);
	mid = size / 2;
	i = 0;
	while (head && i < mid)
	{
		head = head->next;
		i++;
	}
	return (head);
}

t_stack	*big_node(t_stack *head)
{
	t_stack	*big;

	big = head;
	while (head)
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
