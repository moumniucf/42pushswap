/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:58:24 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/10 15:04:00 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "getnextline/get_next_line.h"
typedef	struct s_stack
{
	int data;
	struct s_stack  *next;
	struct s_stack  *prev;
} t_stack;
char	**ft_split(char const *s, char c);
int		ft_isdigit(int c);
int		ft_isdouble(t_stack *head);
int			ft_lstsize(t_stack *lst);
long	ft_atol(const char *str);
void	av_overflow(int ac, char **av);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	rev_rotate(t_stack **head);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_isdouble(t_stack *head);
void	free_stack(t_stack **head);
void	free_stacks(t_stack **a, t_stack **b);
t_stack	*ft_lstlast(t_stack *lst);
int	is_b_sort(t_stack *head);
void	ft_parss(int ac, char **av);
void	*freefun(char **s);
void	av_err(char **av);
int	is_empty_or_spaces(char *str);
int	is_error_index(char *str);
void	splt_err(char **str);
void	splt_err2(char **str);
#endif