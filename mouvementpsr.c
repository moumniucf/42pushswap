/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouvementpsr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:13:46 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/17 15:06:35 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
stack	*new_node(int value)
{
	stack *node;
	node = malloc(sizeof(stack));
	if (!node)
		return (free(node), NULL);
	node->data = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
void	addnew_node(stack **head, int value)
{
	stack *newnode = new_node(value);
	newnode->data = value;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
}
void	addlastin_node(stack **head, int value)
{
	stack *node = new_node(value);
	node->data = value;
	node->next = NULL;
	while((*head)->next != NULL)
	{
		(*head) = (*head)->next;
	}
	(*head)->next = node;
	node->prev = (*head);
}
int main()
{
	int x = 5;
	int x1 = 6;
	int x2 = 7;
	int x3 = 8;
	int x0 = 4;
	int x4 = 9;
	stack *node = new_node(x);
	stack *node1 = new_node(x1);
	stack *node2 = new_node(x2);
	stack *node3 = new_node(x3);
	node3->prev = node2;
	node2->prev = node1;
	node1->prev = node;
	
	// node->next = node1;
	// node1->next = node2;
	// node2->next = node3;
	// addnew_node(&node, x0);
	// addlastin_node(&node3, x4);
	// while(node)
	// {
	// 	printf("%d\n",node->data);
	// 	node = node->next;
	// }
	while(node3 && node)
	{
		printf("%d\n", node3->data);
		// printf("%d\n", node->data);
		node3 = node3->prev;
		// node = node->next;
	}
}