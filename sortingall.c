/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:08:04 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/05 10:12:28 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <math.h>

int	set_chunks(int len)
{
	if (len <= 100)
		return (15);
	else if (len <= 500)
		return (30);
	else if (len <= 1000)
		return (45);
	else if (len <= 2000)
		return (65);
	else 
		return (150);
}

void	to_b(t_stack **a, t_stack **b)
{
	int len = ft_lstsize(*a);
	int chunks = set_chunks(len);
	int i = 1;
	while(ft_lstsize(*a))
	{
		if ((*a)->index < chunks + i)
		{
			pb(a, b);
			if ((*b)->index < i)
				rb(b);
			i++;
		} 
		else
			ra(a);
		if (ft_lstsize(*b) > 1 && (*b)->data < (*b)->next->data)
			sb(b);
	}
}

void	sort_all(t_stack **a, t_stack **b)
{
	to_b(a, b);
	while(ft_lstsize(*b))
	{
		set_position(*b);
		rotate_stack_b(b, big_node(*b));
		pa(a, b);
	}
}

// int main()
// {
// 	t_stack *b = malloc(sizeof(t_stack));
// 	t_stack *node1 = new_node(7);
// 	t_stack *node2 = new_node(2);
// 	t_stack *node3 = new_node(101);
// 	t_stack *node4 = new_node(5);
// 	t_stack *node5 = new_node(84);
// 	t_stack *node6 = new_node(90);
// 	t_stack *node7 = new_node(6);
// 	t_stack *node8 = new_node(3);
// 	t_stack *node9 = new_node(4);
// 	t_stack *node10 = new_node(100);
// 	t_stack *node11 = new_node(17);
// 	t_stack *node12 = new_node(12);
// 	t_stack *node13 = new_node(1);
// 	t_stack *node14 = new_node(55);
// 	t_stack *node15 = new_node(8);
// 	t_stack *node16 = new_node(97);
// 	t_stack *node17 = new_node(67);
// 	t_stack *node18 = new_node(38);
// 	t_stack *node19 = new_node(43);
// 	t_stack *node20 = new_node(10);
// 	t_stack *head = node1;
// 	node1->next = node2;
// 	node1->prev = NULL;
// 	node2->next = node3;
// 	node2->prev = node1;
// 	node3->next = node4;
// 	node3->prev = node2;
// 	node4->next = node5;
// 	node4->prev = node3;
// 	node5->next = node6;
// 	node5->prev = node4;
// 	node6->next = node7;
// 	node6->prev = node5;
// 	node7->next = node8;
// 	node7->prev = node6;
// 	node8->next = node9;
// 	node8->prev = node7;
// 	node9->next = node10;
// 	node9->prev = node8;
// 	node10->next = node11;
// 	node10->prev = node9;
// 	node11->next = node12;
// 	node11->prev = node10;
// 	node12->next = node13;
// 	node12->prev = node11;
// 	node13->next = node14;
// 	node13->prev = node12;
// 	node14->next = node15;
// 	node14->prev = node13;
// 	node15->next = node16;
// 	node15->prev = node14;
// 	node16->next = node17;
// 	node16->prev = node15;
// 	node17->next = node18;
// 	node17->prev = node16;
// 	node18->next = node19;
// 	node18->prev = node17;
// 	node19->next = node20;
// 	node19->prev = node18;
// 	node20->next = NULL;
// 	node20->prev = node19;
// 	// t_stack *last = last_node(head);
// 	// t_stack *first = first_node(head);
// 	// printf("/////%d\n", last->data);
// 	// printf("******%d\n", first->data);
// 	// printf("hgobhofghbo\n");
// 	// to_b(&head, &b);
// 	t_stack *second;
// 	while(head->next)
// 	{
// 		second = head->next;
// 		while(second)
// 		{
// 			if ((head->data) > (second->data))
// 				head->index++;
// 			else
// 				second->index++;
// 			second = second->next;
// 		}
// 		head = head->next;
// 	}
// 	int chunk = 20;
// 	head = node1;
// 	while(ft_lstsize(head))
// 	{
// 		int i = 1;
// 		if (head->index < chunk + i)
// 		{
// 			pb(&head, &b);
// 			if (b->index < i)
// 				rb(&b);
// 			i++;
// 		} else {
// 			ra(&head);
// 		}
// 		printf("==>[%d]\n", ft_lstsize(b));
// 		if (b->next && b->data < b->next->data)
// 			sb(&b);
// 	}
// 	// while(head)
// 	// {
// 	// 	printf("\033[0;32m%d\033[0m, %d\n" , head->data, head->index);
// 	// 	head = head->next;
// 	// }
// 	while(b)
// 	{
// 		printf("\033[0;32m%d\033[0m\n" , b->data);
// 		// printf("%d\n", a->data);
// 		b = b->next;
// 	}
// }
