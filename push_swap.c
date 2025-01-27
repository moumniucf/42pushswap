/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:53:30 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/27 12:25:38 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int ac, char **av)
{
	t_stack *a = NULL;
	t_stack *b = NULL;
	(void)ac;
	int i = 1;
	char **ptr = ft_split(av[i], ' ');
	while(*ptr)
	{
		printf("%s\n", ptr[i++]);
		ptr++;
	}
}