/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:04:02 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/20 15:21:36 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

stack	*ft_lstlast(stack *lst)
{
	stack	*last;

	if (!lst)
		return (NULL);
	while (lst)
	{
		if (!lst->next)
		{
			last = lst;
		}
		lst = lst->next;
	}
	return (last);
}
