/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingtfv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:29:54 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/27 18:27:13 by youmoumn         ###   ########.fr       */
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
	int		first;
	int		second;
	int		last;
	t_stack	*small;

	first = (*head)->data;
	second = (*head)->next->data;
	last = (*head)->next->next->data;
	small = small_node(*head);
	if (is_sort(*head))
		return ;
	if ((small->data) == first)
	{
		sa(head);
		ra(head);
	}
	if ((small->data) == second)
	{
		if (first > last)
			ra(head);
		else
			sa(head);
	}
	if ((small->data) == last)
	{
		if (first < second)
			rra(head);
		else
			ra(head);
		sa(head);
	}
}

void	sortfour(t_stack **head, t_stack **b)
{
	t_stack	*small;
	int		first;
	int		second;
	int		last;
	int		four;

	first = (*head)->data;
	second = (*head)->next->data;
	last = (*head)->next->next->data;
	four = (*head)->next->next->next->data;
	small = small_node(*head);
	if (is_sort(*head))
		return ;
	if ((small->data) == first)
	{
		pb(head, b);
		sortthree(head);
		pa(head, b);
	}
	if ((small->data) == second)
	{
		sa(head);
		pb(head, b);
		sortthree(head);
		pa(head, b);
	}
	if ((small->data) == last)
	{
		rra(head);
		rra(head);
		pb(head, b);
		sortthree(head);
		pa(head, b);
	}
	if ((small->data) == four)
	{
		rra(head);
		pb(head, b);
		sortthree(head);
		pa(head, b);
	}
}

void	sortfive(t_stack **head, t_stack **b)
{
	int		second;
	int		last;
	int		four;
	int		five;
	t_stack	*small;

	second = (*head)->next->data;
	last = (*head)->next->next->data;
	four = (*head)->next->next->next->data;
	five = (*head)->next->next->next->next->data;
	small = small_node(*head);
	if (is_sort(*head))
		return ;
	if ((small->data) == ((*head)->data))
	{
		pb(head, b);
		sortfour(head, b);
		pa(head, b);
	}
	if ((small->data) == second)
	{
		sa(head);
		pb(head, b);
		sortfour(head, b);
		pa(head, b);
	}
	if ((small->data) == last)
	{
		ra(head);
		ra(head);
		pb(head, b);
		sortfour(head, b);
		pa(head, b);
	}
	if ((small->data) == four)
	{
		rra(head);
		rra(head);
		pb(head, b);
		sortfour(head, b);
		pa(head, b);
	}
	if ((small->data) == five)
	{
		rra(head);
		pb(head, b);
		sortfour(head, b);
		pa(head, b);
	}
}

int main()
{
	t_stack *node1 = new_node(1);
	t_stack *node2 = new_node(3);
	t_stack *node3 = new_node(2);
	t_stack *node4 = new_node(5);
	t_stack *node5 = new_node(9);
	t_stack *head = node1;
	t_stack *b = malloc(sizeof(t_stack));
	node1->next = node2;
	node1->prev = NULL;
	node2->next = node3;
	node2->prev = node1;
	node3->next = node4;
	node3->prev = node2;
	node4->prev = node3;
	node4->next = node5;
	node5->next = NULL;
	node5->prev = node4;
	sortfive(&head, &b);
	while(head)
	{
		printf("%d\n",head->data);
		head =head->next;
	}
}