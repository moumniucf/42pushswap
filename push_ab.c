/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:21:15 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/04 17:29:11 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	pa(t_stack **a, t_stack **b)
// {
// 	t_stack	*top_b;

// 	if (!(*b))
// 		return ;
// 	top_b = *b;
// 	if ((*b)->next)
// 		(*b)->next->prev = NULL;
// 	(*b) = top_b->next;
// 	(*a)->prev = top_b;
// 	top_b->next = (*a);
// 	(*a) = top_b;
// 	write(1, "pa\n", 3);
// }
void pa(t_stack **stackA, t_stack **stackB)
{
    t_stack *tmp;

    if (!stackB || !(*stackB)) // Check wach stackB khawi
    {
        printf("pa(): stackB is empty, cannot proceed\n");
        return;
    }

    tmp = *stackB; // Khzna l'node li ghan7ydo
    *stackB = (*stackB)->next; // 9demna f stackB

    if (*stackB)
        (*stackB)->prev = NULL; // Kayna doubly linked list, khasna ndiro prev NULL

    tmp->next = *stackA; // Li kan f stackA, nswlo f tmp->next
    if (*stackA)
        (*stackA)->prev = tmp;

    *stackA = tmp; // Dirna l'ajout f stackA
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