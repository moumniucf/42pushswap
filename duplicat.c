/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:22:06 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/05 11:01:02 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdouble(t_stack *head)
{
	t_stack	*first;
	t_stack	*second;

	first = head;
	while (first)
	{
		second = (first)->next;
		while (second)
		{
			if (first->data == second->data)
			{
				return (0);
			}
			second = second->next;
		}
		first = first->next;
	}
	return (1);
}

// int main()
// {
// 	t_stack *node1 = new_node(2);
// 	t_stack *node2 = new_node(3);
// 	t_stack *node3 = new_node(8);
// 	t_stack *node4 = new_node(6);
// 	t_stack *node5 = new_node(6);
// 	t_stack *head = node1;
// 	node1->next = node2;
// 	node1->prev = NULL;
// 	node2->next = node3;
// 	node2->prev = node1;
// 	node3->next = node4;
// 	node3->prev = node2;
// 	node4->next = node5;
// 	node4->prev = node3;
// 	node5->next = NULL;
// 	node5->prev = node4;
// 	ft_isdouble(head);
// 	int x = ft_isdouble(head);
// 	printf("==>%d\n", x);
// 	while(head)
// 	{
// 		printf("%d\n", head->data);
// 		head = head->next;
// 	}
// }