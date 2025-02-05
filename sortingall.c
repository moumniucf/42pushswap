/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:08:04 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/05 14:28:45 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	set_chunks(int len)
{
	if (len <= 100)
		return (15);
	else if (len <= 500)
		return (30);
	else if (len <= 1000)
		return (45);
	else if (len <= 2000)
		return (65);
	else
		return (150);
}

void	to_b(t_stack **a, t_stack **b)
{
	int	len;
	int	chunks;
	int	i;

	len = ft_lstsize(*a);
	chunks = set_chunks(len);
	i = 1;
	while (ft_lstsize(*a))
	{
		if ((*a)->index < chunks + i)
		{
			pb(a, b);
			if ((*b)->index < i)
				rb(b);
			i++;
		}
		else
		{
			ra(a);
		}
		if (ft_lstsize(*b) > 1 && (*b)->data < (*b)->next->data)
			sb(b);
	}
}

void	sort_all(t_stack **a, t_stack **b)
{
	to_b(a, b);
	while (ft_lstsize(*b))
	{
		set_position(*b);
		rotate_stack_b(b, big_node(*b));
		pa(a, b);
	}
}
