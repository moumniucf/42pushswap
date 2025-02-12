/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:26:34 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/12 11:27:16 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_lstsize(t_stack *lst)
{
	int		ans;
	t_stack	*temp;

	ans = 0;
	temp = lst;
	while (temp)
	{
		ans++;
		temp = temp->next;
	}
	return (ans);
}

int	is_b_sort(t_stack *head)
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
		if ((head->data) < ((head->next->data)))
			return (0);
		head = head->next;
	}
	return (1);
}
