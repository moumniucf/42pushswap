/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:08:04 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/01 15:02:30 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <math.h>
int	stack_size(t_stack *head)
{
	return (ft_lstsize(head));
}
int	set_chunks(t_stack *head)
{
	int len;
	len = stack_size(head);
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


// int main()
// {
// 	t_stack *node1 = new_node(7);
// 	t_stack *node2 = new_node(5);
// 	t_stack *node3 = new_node(9);
// 	t_stack *node4 = new_node(1);
// 	t_stack *node5 = new_node(10);
// 	t_stack *node6 = new_node(0);
// 	t_stack *node7 = new_node(100);
// 	t_stack *node8 = new_node(2);
// 	t_stack *node9 = new_node(-3);
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
// 	node9->next = NULL;
// 	node9->prev = node8;
// 	int y = set_chunks(head);
// 	printf("==>%d\n", y);
// 	printf("%f\n", round(22.50));
// 	// while(head)
// 	// {
// 	// 	printf("%d\n", head->data);
// 	// 	head = head->next;
// 	// }
// }