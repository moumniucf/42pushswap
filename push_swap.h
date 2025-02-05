/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:22:53 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/05 18:19:57 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libc.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				data;
	int				index;
	int				above_median;
	int				current_pos;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

t_stack		*new_node(int value);
t_stack		*ft_lstlast(t_stack *lst);
t_stack		*medium_node(t_stack *head);
t_stack		*small_node(t_stack *head);
t_stack		*big_node(t_stack *head);
int			ft_atoi(const char *str);
int			ft_isdigit(int c);
int			ft_lstsize(t_stack *lst);
int			ft_isdouble(t_stack *head);
int			set_chunks(int len);
int			is_sort(t_stack *head);
int			is_b_sort(t_stack *head);
char		**ft_split(char const *s, char c);
void		*freefun(char **s);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
void		sortfive(t_stack **head, t_stack **b);
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
void		free_stack(t_stack **head);
void		to_b(t_stack **a, t_stack **b);
void		index_stack(t_stack *head);
void		set_position(t_stack *head);
void		sort_all(t_stack **a, t_stack **b);
void		rotate_stack_b(t_stack **b, t_stack *node);
#endif