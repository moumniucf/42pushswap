/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creatstack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:24:11 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/04 18:48:59 by youmoumn         ###   ########.fr       */
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
	while (head->next)
	{
		if ((head->data) > ((head->next->data)))
			return (0);
		head = head->next;
	}
	return (1);
}
void	index_stack(t_stack *head)
{
	t_stack *tmp = head;
	t_stack *second;
	while(tmp->next)
	{
		second = tmp->next;
		while(second)
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

t_stack	*last_node(t_stack *head)
{
	while(head->next)
	{
		head = head->next;
	}
	return (head);
}
t_stack *first_node(t_stack *head)
{
	t_stack *tmp;
	while(head)
	{
		if (head->prev == NULL)
		{
			tmp = head;
		}
		head = head->next;
	}
	return (tmp);
}

void	set_position(t_stack *head)
{
	int mid  = ft_lstsize(head) / 2;
	int i = 0;
	while(head)
	{
		head->current_pos = i;
		head->index = 0;
		if (i <= mid)
			head->above_median = 1;
		else
			head->above_median = 0;
		head = head->next;
		// i++;
	}
}

// int main()
// {
// 	t_stack *node1 = new_node(7);
// 	t_stack *node2 = new_node(2);
// 	t_stack *node3 = new_node(101);
// 	t_stack *node4 = new_node(5);
// 	t_stack *node5 = new_node(84);
// 	t_stack *node6 = new_node(90);
// 	t_stack *node7 = new_node(6);
// 	t_stack *node8 = new_node(3);
// 	t_stack *node9 = new_node(4);
// 	t_stack *node10 = new_node(100);
// 	t_stack *head = node1;
// 	node1->next = node2;
// 	node1->prev = NULL;
// 	node2->next = node3;
// 	node2->prev = node1;
// 	node3->next = node4;
// 	node3->prev = node2;
// 	node4->next = node5;
// 	node4->prev = node3;
// 	node5->next = node6;
// 	node5->prev = node4;
// 	node6->next = node7;
// 	node6->prev = node5;
// 	node7->next = node8;
// 	node7->prev = node6;
// 	node8->next = node9;
// 	node8->prev = node7;
// 	node9->next = node10;
// 	node9->prev = node8;
// 	node10->next = NULL;
// 	node10->prev = node9;
// 	set_position(node1);
// 	printf("%d\n", head->above_median);
// 	// while(head)
// 	// {
// 	// 	printf("\033[0;32m%d\033[0;32m\n", head->data);
// 	// 	head = head->next;
// 	// }
// }