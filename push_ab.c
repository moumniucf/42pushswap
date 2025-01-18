/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:21:15 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/18 18:20:03 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	pa(stack **a, stack **b)
{
	stack *top_b;
	*a = top_b->next;
}
int main()
{
	int x = 5;
	int y = 6;
	int z = 7;
	stack *node1 = new_node(x);
	stack *node2 = new_node(y);
	stack *node3 = new_node(z);
	node1->next = node2;
	pa(&node2, &node1);
	while(node1)
	{
		printf("%d\n", node1->data);
		node1 = node1->next;
	}
}