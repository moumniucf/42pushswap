/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:20:20 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/12 11:25:35 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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

int	is_sort(t_stack *head)
{
	if (!head)
		return (0);
	if (ft_lstsize(head) == 1)
	{
		free_stack(&head);
		exit(1);
	}
	while (head->next)
	{
		if ((head->data) > ((head->next->data)))
			return (0);
		head = head->next;
	}
	return (1);
}

void	doubl_error(t_stack *a)
{
	if (!ft_isdouble(a))
	{
		write(2, "Error\n", 6);
		free_stack(&a);
		exit(1);
	}
}
