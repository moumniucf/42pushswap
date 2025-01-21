/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 09:58:22 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/21 09:58:42 by youmoumn         ###   ########.fr       */
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
