/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 12:26:25 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/07 15:11:59 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	if (!lst)
	{
		return (0);
	}
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
void	is_splited(char **str)
{
	if (*str == NULL)
	{
		freefun(str);
		exit(1);
	}
}