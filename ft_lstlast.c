/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:58:22 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/09 19:30:26 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	rev_sstack_a(t_stack **a, t_stack *node)
{
	if (!ft_lstsize(*a))
		return ;
	if (node->above_median)
	{
		while ((*a)->data != node->data)
			ra(a);
	}
	else
	{
		while ((*a)->data != node->data)
			rra(a);
	}
}
