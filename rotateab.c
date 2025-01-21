/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:40:30 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/21 16:23:44 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(stack **head)
{
	stack	*last;

	if (!(*head) || !(*head)->next)
		return ;
	last = ft_lstlast(*head);
	last->next = (*head);
	(*head) = (*head)->next;
	(*head)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
	
}

void	ra(stack **a)
{
	if (!(*a))
		return ;
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(stack **b)
{
	if (!(*b))
		return ;
	rotate(b);
	write(1, "rb\n", 3);
}

void	rr(stack **a, stack **b)
{
	if (!(*a) || !(*b))
		return ;
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
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
	node4->prev = node3;
	node4->next = NULL;
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
	noded->prev = node3;
	node4->next = NULL;
	// rotate(&head);
	ra(&stackb);
	// rr(&stacka, &stackb);
	while(stacka || stackb)
	{
		printf("||%d||%d||\n", stacka->data, stackb->data);
		stacka = stacka->next;
		stackb = stackb->next;
	}
	// while(stackb)
	// {
	// 	printf("%d\n", stackb->data);
	// 	stackb = stackb->next;
	// }
}