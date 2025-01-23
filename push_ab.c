/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:21:15 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/22 18:07:04 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(stack **a, stack **b)
{
	stack	*top_b;

	if (!(*b))
		return ;
	top_b = *b;
	top_b->next->prev = NULL;
	top_b->next = (*a);
	top_b->prev = NULL;
	(*a) = top_b;
	write(1, "pa\n", 3);
}

void	pb(stack **a, stack **b)
{
	stack	*top_a;

	if (!(*a))
		return ;
	top_a = *a;
	top_a->next->prev = NULL;
	top_a->next = (*b);
	top_a->prev = NULL;
	*b = top_a;
	write(1, "pb\n", 3);
}

// int main()
// {
// 	stack *node1 = new_node(5);
// 	stack *node2 = new_node(6);
// 	stack *node3 = new_node(7);
// 	stack *node4 = new_node(8);
// 	stack *stacka = node1;
// 	node1->next = node2;
// 	node1->prev = NULL;
// 	node2->next = node3;
// 	node2->prev = node1;
// 	node3->next = node4;
// 	node3->prev = node2;
// 	node4->prev = node3;
// 	node4->next = NULL;
// 	stack *nodea = new_node(1);
// 	stack *nodeb = new_node(2);
// 	stack *nodec = new_node(3);
// 	stack *noded = new_node(4);
// 	stack *stackb = nodea;
// 	nodea->next = nodeb;
// 	nodea->prev = NULL;
// 	nodeb->next = nodec;
// 	nodeb->prev = nodea;
// 	nodec->next = noded;
// 	nodec->prev = nodeb;
// 	noded->prev = node3;
// 	node4->next = NULL;
// 	pa(&stacka, &stackb);
// 	while(stacka && stackb)
// 	{
// 		printf("|%d| |%d|\n", stacka->data, stackb->data);
// 		stacka = stacka->next;
// 		stackb = stackb->next;
// 	}
// }