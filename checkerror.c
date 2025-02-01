/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:03:14 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/01 16:56:03 by youmoumn         ###   ########.fr       */
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

t_stack		*medium_node(t_stack *head)
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
void	leaks()
{
	system("leaks a.out");
}

// int main()
// {
// 	t_stack *node1 = new_node(5);
// 	t_stack *node2 = new_node(8);
// 	t_stack *node3 = new_node(-10);
// 	t_stack *node4 = new_node(9);
// 	t_stack *node5 = new_node(100);
// 	t_stack *node6 = new_node(-50);
// 	t_stack *node7 = new_node(1);
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
// 	node7->next = NULL;
// 	node7->prev = node6;
// 	int md = medium_node(head);
// 	// t_stack *md = big_node(head);
// 	printf("%d\n", md);
// 	// while(head)
// 	// {
// 	// 	printf("%d\n", head->data);
// 	// 	head = head->next;
// 	// }
// }