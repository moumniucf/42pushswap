/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:22:53 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/15 17:37:13 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef	struct	t_stock
{
	int content;
	struct t_stock *next;
}	stack;
#include <libc.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
int	ft_isdigit(int c);
#endif