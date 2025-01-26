/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingtfv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:29:54 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/26 13:21:36 by youmoumn         ###   ########.fr       */
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
		sa(head); //2.1.3
	}
	if ((first->data) > (second->data) && (second->data) > (last->data))
	{
		sa(head);
		rra(head);//3.2.1
	}
	if ((first->data) > (second->data) && (second->data) < (last->data))
	{
		ra(head);//3.1.2
	}
	if ((first->data) < (second->data) && (second->data) > (last->data) && (first->data) < (last->data))
	{
		sa(head);
		ra(head);//1.3.2
	}
	if ((first->data) < (second->data) && (second->data) > (last->data))
	{
		rra(head);//2.3.1
	}
}
void	sortfour(stack **head)
{
	stack *first;
	stack *second;
	stack *last;
}
int main()
{
	stack *node1 = new_node(3);
	stack *node2 = new_node(2);
	stack *node3 = new_node(3);
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