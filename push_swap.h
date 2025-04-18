/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:22:53 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/19 14:10:43 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

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
void		to_b(t_stack **a, t_stack **b);
void		index_stack(t_stack *head);
void		set_position(t_stack *head);
void		sort_all(t_stack **a, t_stack **b);
void		rotate_stack_b(t_stack **b, t_stack *node);
void		free_stack(t_stack **head);
void		*freefun(char **s);
void		free_stacks(t_stack **a, t_stack **b);
int			is_empty_or_spaces(char *str);
int			is_error_index(char *str);
long		ft_atol(const char *str);
void		ft_parss(int ac, char **av, t_stack **a);
void		av_err(int ac, char **av, t_stack **a);
void		av_overflow(int ac, char **av, t_stack **a);
void		back_satck(t_stack *a, t_stack *b);
void		splt_err(char **str, t_stack **a);
void		splt_err2(char **str, t_stack **a);
void		sortthree1(t_stack **head);
void		sortthree2(t_stack **head);
void		sortthree3(t_stack **head);
void		sortfour_1(t_stack **head, t_stack **b);
void		sortfour_2(t_stack **head, t_stack **b);
void		sortfour_3(t_stack **head, t_stack **b);
void		sortfive_1(t_stack **head, t_stack **b);
void		sortfive_2(t_stack **head, t_stack **b);
void		sortfive_3(t_stack **head, t_stack **b);
#endif