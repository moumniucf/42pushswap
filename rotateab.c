/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotateab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:40:30 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/20 18:55:57 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	rotate(stack **head)
{
	stack *last;
	last = ft_lstlast(*head);
	last->next = (*head);
	*head = (*head)->next;
	(*head)->prev = NULL;
    // last->next->prev = last;
    last->next->next = NULL;
}
void	ra(stack **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}
void	rb(stack **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}
int main()
{
	stack *node1 = new_node(5);
	stack *node2 = new_node(6);
	stack *node3 = new_node(7);
	stack *node4 = new_node(8);
	stack *head = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	// rotate(&head);
	rb(&head);
	while(head)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
}