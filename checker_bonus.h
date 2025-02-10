/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:58:24 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/09 11:28:18 by youmoumn         ###   ########.fr       */
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
#endif