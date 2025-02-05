/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:21:15 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/05 16:45:18 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	pa(t_stack **a, t_stack **b)
// {
// 	t_stack	*top_b;

// 	if (!(*b))
// 		return ;
// 	top_b = *b;
// 	*b = top_b->next;
// 	if ((*b))
// 		(*b)->prev = NULL;
// 	(*b) = top_b->next;
// 	if ((*b))
// 	{
// 		(*a)->prev = (*b);
// 		top_b->next = (*a);
// 		(*a) = top_b;
// 	}
// 	else
// 	{
// 		top_b->next = NULL;
// 		top_b->prev = NULL;
// 		(*a) = top_b;
// 	}
// 	write(1, "pa\n", 3);
// }
void pa(t_stack **a, t_stack **b)
{
	t_stack *top_b;

	if (!(*b)) // B7al li kayn ghir empty stack
		return ;

	top_b = *b;
	*b = top_b->next; // T7it mn b
	if (*b)
		(*b)->prev = NULL; // Khdem sa7i7 ila fi b
	top_b->next = (*a); // T7it fi stack a
	if (*a)
		(*a)->prev = top_b;
	(*a) = top_b;  // Ajli l9a7 fi a
	write(1, "pa\n", 3);
}


void	pb(t_stack **a, t_stack **b)
{
	t_stack	*top_a;

	if (!(*a))
		return ;
	top_a = (*a);
	if ((*a))
		(*a)->prev = NULL;
	(*a) = top_a->next;
	if (*b)
	{
		(*b)->prev = (*a);
		top_a->next = (*b);
		(*b) = top_a;
	} else {
		top_a->next = NULL;
		top_a->prev = NULL;
		(*b) = top_a;
	}
	write(1, "pb\n", 3);
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
// 	node4->next = NULL;
// 	node4->prev = node3;
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
// 	noded->next = NULL;
// 	noded->prev = nodec;
// 	pa(&stacka, &stackb);
// 	while(stacka)
// 	{
// 		printf("|%d|\n", stacka->data);
// 		stacka = stacka->next;
// 	}
// 	printf("========\n");
// 	while(stackb)
// 	{
// 		printf("|%d|\n", stackb->data);
// 		stackb = stackb->next;
// 	}
// }