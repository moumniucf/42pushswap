/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:03:54 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/27 12:45:28 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack **head)
{
	t_stack	*last;

	last = ft_lstlast(*head);
	last->prev->next = NULL;
	last->next = (*head);
	last->prev = NULL;
	(*head) = last;
}

void	rra(t_stack **a)
{
	rev_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rev_rotate(b);
	write(1, "rrb\n", 3);
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
	write(1, "rrr\n", 4);
}

// int main()
// {
// 	t_stack *node1 = new_node(5);
// 	t_stack *node2 = new_node(6);
// 	t_stack *node3 = new_node(7);
// 	t_stack *node4 = new_node(8);
// 	t_stack *stacka = node1;
// 	node1->next = node2;
// 	node1->prev = NULL;
// 	node2->next = node3;
// 	node2->prev = node1;
// 	node3->next = node4;
// 	node3->prev = node2;
// 	node4->prev = node3;
// 	node4->next = NULL;
// 	t_stack *nodea = new_node(1);
// 	t_stack *nodeb = new_node(2);
// 	t_stack *nodec = new_node(3);
// 	t_stack *noded = new_node(4);
// 	t_stack *stackb = nodea;
// 	nodea->next = nodeb;
// 	nodea->prev = NULL;
// 	nodeb->next = nodec;
// 	nodeb->prev = nodea;
// 	nodec->next = noded;
// 	nodec->prev = nodeb;
// 	noded->prev = node3;
// 	node4->next = NULL;
// 	rrr(&stacka, &stackb);
// 	while(stacka && stackb)
// 	{
// 		printf("||%d||%d||\n", stacka->data, stackb->data);
// 		stacka = stacka->next;
// 		stackb = stackb->next;
// 	}
// }