/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:13:35 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/09 17:15:13 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	back_satck(t_stack *a, t_stack *b)
{
	if (!ft_isdouble(a))
	{
		write(2, "Error\n", 6);
		free_stack(&a);
		exit(1);
	}
	if (is_b_sort(a) && ft_lstsize(a) > 5)
	{
		while (ft_lstsize(a))
		{
			pb(&a, &b);
		}
		while (ft_lstsize(b))
		{
			rrb(&b);
			pa(&a, &b);
		}
	}
}

void	splt_err(char **str)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	if ((str[j][k] == '-' || str[j][k] == '+' || str[j][k] == ' '))
		k++;
	while (str[j][k])
	{
		if (!ft_isdigit(str[j][k]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		k++;
	}
}
