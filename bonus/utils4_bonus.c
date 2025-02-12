/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:22:26 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/12 11:25:46 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

t_stack	*new_node(int value)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

int	ft_atoi(char const *str)
{
	int				i;
	int				x;
	long			rst;

	i = 0;
	x = 1;
	rst = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			x = x * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		rst = rst * 10 + str[i] - 48;
		if ((size_t)rst > LLONG_MAX && x == -1)
			return (0);
		if ((size_t)rst > LLONG_MAX)
			return (-1);
		i++;
	}
	return (rst * x);
}
