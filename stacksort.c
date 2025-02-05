/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:17:47 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/05 11:00:04 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
t_stack	*last_node(t_stack *head)
{
	while (head->next)
	{
		head = head->next;
	}
	return (head);
}

t_stack	*first_node(t_stack *head)
{
	t_stack	*tmp;

	while (head)
	{
		if (head->prev == NULL)
		{
			tmp = head;
		}
		head = head->next;
	}
	return (tmp);
}