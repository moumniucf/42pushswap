/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:43:39 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/17 19:52:56 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sw_ap(stack **head)
{
	stack *first = *head;
	stack *second = (*head)->next;
	int tmp = first->data;
	first->data = second->data;
	second->data = tmp;
	//kanssawapiw data dial kola node
}
void	sa(stack **a)
{
	sw_ap(a);
	write(1, "sa\n", 3);
}
void	sb(stack **b)
{
	sw_ap(b);
	write(1, "sb\n", 3);
}
void	ss(stack **a, stack **b)
{
	sw_ap(a);
	sw_ap(b);
	write(1, "ss\n", 3);
}

void	leaks()
{
	system("leaks a.out");
}
int main()
{
	atexit(leaks);
	int x = 5;
	int y = 10;
	int z = 20;
	stack *node1 = new_node(x);
	stack *node2 = new_node(y);
	stack *node3 = new_node(z);
	node1->next = node2;
	node2->next = node3;
	// sw_ap(&node1);
	sa(&node2);
	while(node1)
	{
		printf("%d\n", node1->data);
		node1 = node1->next;
	}
}