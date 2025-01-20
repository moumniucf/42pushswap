/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:21:15 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/20 12:22:27 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	pa(stack **a, stack **b)
{
	stack	*top_b;
	top_b = *b;
	top_b->next = (*a);
	top_b->prev = NULL;
	*a = top_b;
	write(1, "pa\n", 3);
}
void	pb(stack **a, stack **b)
{
	stack *top_a;
	top_a = *a;
	top_a->next = (*b);
	top_a->prev = NULL;
	*b = top_a;
	write(1, "pb\n", 3);
}
int main()
{
	stack *node1 = new_node(10);
	stack *node2 = new_node(20);
	stack *node3 = new_node(30);
	stack *head = node1;
	node1->next = node2;
	node2->next = node3;
	stack *nodeplus = new_node(5);
	// pb(&nodeplus, &head);
	pa(&head, &nodeplus);
	while(head)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
}