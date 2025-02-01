/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:03:14 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/01 10:44:01 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **head)
{
	t_stack *tmp;
	while(*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	head = NULL;
}
// void	leaks()
// {
// 	system("leaks a.out");
// }

// int main()
// {
// 	atexit(leaks);
// 	t_stack *node1 = new_node(5);
// 	t_stack *node2 = new_node(8);
// 	t_stack *node3 = new_node(-10);
// 	t_stack *head = node1;
// 	node1->next = node2;
// 	node1->prev = NULL;
// 	node2->next = node3;
// 	node2->prev = node1;
// 	node3->next = NULL;
// 	node3->prev = node2;
// 	free_stack(&head);
// 	while(head)
// 	{
// 		printf("%d\n", head->data);
// 		head = head->next;
// 	}
// }