/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creatstack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:24:11 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/19 11:28:08 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_node(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = value;
	node->next = NULL;
	node->prev = NULL;
	node->index = 0;
	return (node);
}

int	is_sort(t_stack *head)
{
	if (!head)
		return (0);
	if (ft_lstsize(head) == 1)
	{
		free_stack(&head);
		exit(1);
	}
	while (head->next)
	{
		if ((head->data) > ((head->next->data)))
			return (0);
		head = head->next;
	}
	return (1);
}

int	is_b_sort(t_stack *head)
{
	if (!head)
		return (0);
	if (ft_lstsize(head) == 1)
	{
		free_stack(&head);
		exit(0);
	}
	while (head->next)
	{
		if ((head->data) < ((head->next->data)))
			return (0);
		head = head->next;
	}
	return (1);
}

void	index_stack(t_stack *head)
{
	t_stack	*tmp;
	t_stack	*second;

	if (!head)
		return ;
	tmp = head;
	while (tmp->next)
	{
		second = tmp->next;
		while (second)
		{
			if ((tmp->data) > (second->data))
				tmp->index++;
			else
				second->index++;
			second = second->next;
		}
		tmp = tmp->next;
	}
}

void	set_position(t_stack *head)
{
	int	mid;
	int	i;

	mid = ft_lstsize(head) / 2;
	i = 0;
	while (head)
	{
		head->current_pos = i;
		if (i <= mid)
			head->above_median = 1;
		else
			head->above_median = 0;
		head = head->next;
		i++;
	}
}
