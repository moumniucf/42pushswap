/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:22:53 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/25 12:18:56 by youmoumn         ###   ########.fr       */
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
stack	*ft_lstlast(stack *lst);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
void	*freefun(char **s);
int		ft_isdigit(int c);
void	ft_lstadd_back(stack **lst, stack *new);
int		ft_lstsize(stack *lst);
void	sw_ap(stack **head);
void	sa(stack **a);
void	sb(stack **b);
void	ss(stack **a, stack **b);
void	rotate(stack **head);
void	ra(stack **a);
void	rb(stack **b);
void	rr(stack **a, stack **b);
void	rev_rotate(stack **head);
void	rra(stack **a);
void	rrb(stack **b);
void	rrr(stack **a, stack **b);
void	pa(stack **a, stack **b);
void	pb(stack **a, stack **b);
#endif