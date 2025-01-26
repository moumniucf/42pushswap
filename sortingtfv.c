/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingtfv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:29:54 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/26 18:20:12 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

stack	*small_node(stack *head)
{
	stack	*small;

	small = head;
	while (head)
	{
		if (head->data < small->data)
			small = head;
		head = head->next;
	}
	return small;
}
int	is_sort(stack *head)
{
	while(head->next)
	{
		if ((head->data) > ((head->next->data)))
			return (0);
		head = head->next;
	}
	return (1);
}
void	sortthree(stack **head)
{
	int first = (*head)->data;
	int second = (*head)->next->data;
	int last = (*head)->next->next->data;
	// printf("========>[%d]\n", small_node(*head)->data);
	if (small_node(*head)->data == first)
	{
		sa(head);
		ra(head);
	}
	if (small_node(*head)->data == second)
	{
		if (first > last)
			ra(head);
		else
			sa(head);
	}
	if (small_node(*head)->data == last)
	{
		if (first < second)
			rra(head);
		else
		{
			ra(head);
			sa(head);
		}
	}
	
	// if (first > second && second > last && first < last)
	// 	sa(head); //2.1.3
	// if (first > second && second > last)
	// {
	// 	sa(head);
	// 	rra(head);//3.2.1
	// }
	// if (first > second && second < last)
	// 	ra(head);//3.1.2
	// if (first < second && second > last && first < last)
	// {
	// 	sa(head);
	// 	ra(head);//1.3.2
	// }
	// if (first < second && second > last)
	// 	rra(head);//2.3.1
}

void	sortfour(stack **head, stack **b)
{
	int first = (*head)->data;
	int second = (*head)->next->data;
	int last = (*head)->next->next->data;
	int four = (*head)->next->next->next->data;
	stack *small = small_node(*head);
	if ((small->data) == first)
	{
		pb(head, b);
		sortthree(head);
		pa(head,b);
	}
	if ((small->data) == second)
	{
		sa(head);
		pb(head, b);
		sortthree(head);
		pa(head,b);
	}
	if ((small->data) == last)
	{
		rra(head);
		rra(head);
		pb(head, b);
		sortthree(head);
		pa(head,b);
	}
	if ((small->data) == four)
	{
		rra(head);
		pb(head, b);
		sortthree(head);
		pa(head,b);
	}
}

int main()
{
	stack *node1 = new_node(0);
	stack *node2 = new_node(1);
	stack *node3 = new_node(3);
	stack *node4 = new_node(4);
	stack *head = node1;
	stack *b = malloc(sizeof(stack));
	node1->next = node2;
	node1->prev = NULL;
	node2->next = node3;
	node2->prev = node1;
	node3->next = node4;
	node3->prev = node2;
	node4->prev = node3;
	node4->next = NULL;
	// sortthree(&head);
	int x = is_sort(head);
	printf("==>%d\n", x);
	sortfour(&head, &b);
	while(head)
	{
		printf("%d\n",head->data);
		head =head->next;
	}
}