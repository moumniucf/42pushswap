/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creatstack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 17:24:11 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/26 14:49:59 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
stack	*new_node(int value)
{
	stack *node;
	node = malloc(sizeof(stack));
	if (!node)
		return (NULL);
	node->data = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}