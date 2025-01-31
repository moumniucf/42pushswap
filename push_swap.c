/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:53:30 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/31 16:42:24 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// void	leaks()
// {
// 	system("leaks push_swap");
// }
int main(int ac, char **av)
{
	// atexit(leaks);
	t_stack *a = NULL;
	if (ac == 1 || !av[1][0])
		return (0);
	int i = 1;
	while(i < ac)
	{
		char **str = ft_split(av[i], ' ');
		int j = 0;
		int k = 0;
		if ((av[i][0] == '-' || av[i][0] == '+') && av[i][1] == '\0')
		{
			write(1, "Error\n", 6);
			exit(1);
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
					exit(1);
				}
				k++;
			}
			t_stack *new = new_node(ft_atoi(str[j]));
			ft_lstadd_back(&a, new);
			j++;
		}
		i++;
	}
	if (!ft_isdouble(a))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if(!is_sort(a))
	{
		t_stack *b = malloc(sizeof(t_stack));
		if ((ft_lstsize(a)) == 2)
		{
			sa(&a);
		}
		else if ((ft_lstsize(a)) == 3)
		{
			sortthree(&a);
		}
		else if ((ft_lstsize(a)) == 4)
		{
			sortfour(&a, &b);
		}
		else if ((ft_lstsize(a)) == 5)
		{
			sortfive(&a, &b);
		}
		// else 
		// {

		// }
	}
	t_stack *tmp = a;
	while(tmp){
		printf("===>[%d]\n", tmp->data);
		tmp = tmp->next;
	}
}