/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvementpsr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:13:46 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/31 13:24:21 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
t_stack	*new_node(int value)
{
	t_stack *node;
	node = malloc(sizeof(t_stack));
	if (!node)
		return (free(node), NULL);
	node->data = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
void	addnew_node(t_stack **head, int value)
{
	t_stack *newnode = new_node(value);
	newnode->data = value;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
}
void	addlastin_node(t_stack **head, int value)
{
	t_stack *node = new_node(value);
	node->data = value;
	node->next = NULL;
	while((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}
	(*head)->next = node;
	node->prev = (*head);
}
void	swap_a_b(t_stack **head)
{
	t_stack *first = (*head);
	t_stack *second = (*head)->next;
	t_stack *help = (second)->next;
	first->next->prev = NULL;
	second->next->prev = NULL;
	first->next = help;
	first->prev = second;
	second->next = first;
	second->prev = NULL;
	(*head) = second;
}
void	s_a(t_stack **a)
{
	swap_a_b(a);
	write(1, "s_a\n", 4);
}

// int main()
// {
// 	int x = 5;
// 	int x1 = 6;
// 	int x2 = 7;
// 	int x3 = 8;
// 	t_stack *node1 = new_node(x);
// 	t_stack *node2 = new_node(x1);
// 	t_stack *node3 = new_node(x2);
// 	t_stack *node4 = new_node(x3);
// 	t_stack *head = node1;
// 	node1->next = node2;
// 	node1->prev = NULL;
// 	node2->next = node3;
// 	node2->prev = node1;
// 	node3->next = node4;
// 	node3->prev = node2;
// 	node4->next = NULL;
// 	node4->prev = node3;
// 	swap_a_b(&head);
// 	while(head)
// 	{
// 		printf("%d\n", head->data);
// 		head = head->next;
// 	}
// }
