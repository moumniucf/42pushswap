/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:22:53 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/28 15:46:11 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libc.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

t_stack		*new_node(int value);
t_stack		*ft_lstlast(t_stack *lst);
int			ft_atoi(const char *str);
char		**ft_split(char const *s, char c);
void		*freefun(char **s);
int			ft_isdigit(int c);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
int			ft_lstsize(t_stack *lst);
t_stack		*small_node(t_stack *head);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		sortfive(t_stack **head, t_stack **b);
int			ft_isdouble(t_stack *head);
int			is_sort(t_stack *head);
void		sort_two(t_stack *head);
int			ft_iserror(char *str);
void		sortfour(t_stack **head, t_stack **b);
void		sortthree(t_stack **head);
void		sw_ap(t_stack **head);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);
void		rotate(t_stack **head);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);
void		rev_rotate(t_stack **head);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
#endif