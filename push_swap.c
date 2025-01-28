/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:53:30 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/28 17:32:46 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap.h"
int main(int ac, char **av)
{
	t_stack *stack_a = NULL;
	
	int i = 1;
	while(i < ac)
	{
		char **str = ft_split(av[i], ' ');
		int j = 0;
		int k = 0;
		if ((av[i][0] == '-' || av[i][0] == '+') && av[i][1] == '\0')
		{
			write(1, "Error\n", 6);
			exit(0);
		}
		while(str[j])
		{
			k = 0;
			if ((str[j][k] == '-' || str[j][k] == '+') && k == 0)
				k++;
			while(str[j][k])
			{
				if (!ft_isdigit(str[j][k]))
				{
					write(1, "Error\n", 6);
					exit(0);
				}
				k++;
			}
			t_stack *new = new_node(ft_atoi(str[j]));
			ft_lstadd_back(&stack_a, new);
			if (ft_lstsize(stack_a) == 2)
			{
				sort_two(stack_a);
			}
			else if (ft_lstsize(stack_a) == 3)
			{
				sortthree(&stack_a);
			}
			else if (ft_lstsize(stack_a) == 4)
			{
				sortfour(&stack_a, &new);
			}
			else if (ft_lstsize(stack_a) == 5)
			{
				sortfive(&stack_a, &new);
			}
			j++;
		}
		i++;
	}
	while(stack_a)
	{
		printf("---%d\n", stack_a->data);
		stack_a = stack_a->next;
	}
}
