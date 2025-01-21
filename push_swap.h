/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:22:53 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/21 17:05:23 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef	struct	s_stack
{
	int		data;
	struct	s_stack *next;
	struct	s_stack *prev;
}	stack;
#include <libc.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
stack	*new_node(int value);
void	*freefun(char **s);
void	sw_ap(stack **head);
void	sa(stack **a);
void	sb(stack **b);
void	ss(stack **a, stack **b);
char	**ft_split(char const *s, char c);
stack	*ft_lstlast(stack *lst);
void	rotate(stack **head);
void	ra(stack **a);
void	rb(stack **b);
void	rr(stack **a, stack **b);
int		ft_atoi(const char *str);
#endif