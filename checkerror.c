/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 10:03:14 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/28 15:22:42 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	sort_two(t_stack *head)
{
	t_stack *small = small_node(head);
	int second = (head)->next->data;
	if (is_sort(head))
		return ;
	if ((small->data) == second)
	{
		sa(&head);
	}
}
