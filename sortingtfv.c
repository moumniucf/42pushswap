/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingtfv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:29:54 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/12 14:33:33 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*small_node(t_stack *head)
{
	t_stack	*small;

	small = head;
	while (head)
	{
		if (head->data < small->data)
			small = head;
		head = head->next;
	}
	return (small);
}

void	sortthree(t_stack **head)
{
	sortthree1(head);
	sortthree2(head);
	sortthree3(head);
}

void	sortfour(t_stack **head, t_stack **b)
{
	sortfour_1(head, b);
	sortfour_2(head, b);
	sortfour_3(head, b);
}

void	sortfive(t_stack **head, t_stack **b)
{
	sortfive_1(head, b);
	sortfive_2(head, b);
	sortfive_3(head, b);
}
