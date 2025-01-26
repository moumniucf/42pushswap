/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingtfv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:29:54 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/26 17:08:32 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"
void	sortthree(stack **head)
{
	int first = (*head)->data;
	int second = (*head)->next->data;
	int last = (*head)->next->next->data;
	if (first > second && second > last && first < last)
		sa(head); //2.1.3
	if (first > second && second > last)
	{
		sa(head);
		rra(head);//3.2.1
	}
	if (first > second && second < last)
		ra(head);//3.1.2
	if (first < second && second > last && first < last)
	{
		sa(head);
		ra(head);//1.3.2
	}
	if (first < second && second > last)
		rra(head);//2.3.1
}

void	sortfour(stack **head)
{
	stack *first = (*head);
	stack *second = first->next;
	stack *last = second->next;
	stack *four = last->next;
	if ((first->data) < (second->data) && (first->data) < (last->data) && (first->data) < (four->data))
	{
		sortthree(head);
	}
	if ((first->data) > (second->data) && (last->data) > (second->data) && (four->data) > (second->data))
	{
		
	}
}

int main()
{
	stack *node1 = new_node(0);
	stack *node2 = new_node(1);
	stack *node3 = new_node(-3);
	// stack *node4 = new_node(2);
	stack *head = node1;
	node1->next = node2;
	node1->prev = NULL;
	node2->next = node3;
	node2->prev = node1;
	// node3->next = node4;
	node3->prev = node2;
	// node4->prev = node3;
	// node4->next = NULL;
	sortthree(&head);
	// sortfour(&head);
	while(head)
	{
		printf("%d\n",head->data);
		head =head->next;
	}
}