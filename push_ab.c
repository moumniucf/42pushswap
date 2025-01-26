/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:21:15 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/26 13:20:02 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(stack **a, stack **b)
{
	stack	*top_b;

	if (!(*b))
		return ;
	top_b = *b;
	if ((*b)->next)
		(*b)->next->prev = NULL;
	(*b) = top_b->next;
	(*a)->prev = top_b;
	top_b->next = (*a);
	(*a) = top_b;
	write(1, "pa\n", 3);
}

void	pb(stack **a, stack **b)
{
	stack	*top_a;

	if (!(*a))
		return ;
	top_a = (*a);
	if ((*a)->next)
		(*a)->next->prev = NULL;
	(*a) = top_a->next;
	(*b)->prev = (*a);
	top_a->next = (*b);
	(*b) = top_a;
	write(1, "pb\n", 3);
}

int main()
{
	stack *node1 = new_node(5);
	stack *node2 = new_node(6);
	stack *node3 = new_node(7);
	stack *node4 = new_node(8);
	stack *stacka = node1;
	node1->next = node2;
	node1->prev = NULL;
	node2->next = node3;
	node2->prev = node1;
	node3->next = node4;
	node3->prev = node2;
	node4->next = NULL;
	node4->prev = node3;
	stack *nodea = new_node(1);
	stack *nodeb = new_node(2);
	stack *nodec = new_node(3);
	stack *noded = new_node(4);
	stack *stackb = nodea;
	nodea->next = nodeb;
	nodea->prev = NULL;
	nodeb->next = nodec;
	nodeb->prev = nodea;
	nodec->next = noded;
	nodec->prev = nodeb;
	noded->next = NULL;
	noded->prev = nodec;
	pb(&stacka, &stackb);
	while(stacka)
	{
		printf("|%d|\n", stacka->data);
		stacka = stacka->next;
	}
	printf("========\n");
	while(stackb)
	{
		printf("|%d|\n", stackb->data);
		stackb = stackb->next;
	}
}