/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingtfv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:29:54 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/25 20:16:31 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"
void	sortthree(stack **head)
{
	stack *first = (*head);
	stack *second = first->next;
	stack *last = second->next;
	if((first->data) > (second->data) && (second->data) > (last->data) && (first->data) < (last->data))
	{
		sa(head);
	}
	else if ((first->data) > (second->data) > (last->data))
	{
		// sa(head);
		rra(head);
	}
}
int main()
{
	stack *node1 = new_node(1);
	stack *node2 = new_node(3);
	stack *node3 = new_node(2);
	stack *head = node1;
	node1->next = node2;
	node1->prev = NULL;
	node2->next = node3;
	node2->prev = node1;
	node3->next = NULL;
	node3->prev = node2;
	sortthree(&head);
	while(head)
	{
		printf("%d\n",head->data);
		head =head->next;
	}
}