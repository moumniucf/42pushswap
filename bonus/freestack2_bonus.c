/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freestack2_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:18:41 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/12 11:23:28 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	free_stack(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*help;

	if (head == NULL)
		return ;
	help = *head;
	while (help)
	{
		tmp = (help)->next;
		free(help);
		help = tmp;
	}
	head = NULL;
}

void	free_stacks(t_stack **a, t_stack **b)
{
	free_stack(a);
	free_stack(b);
}
