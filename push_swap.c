/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:53:30 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/05 18:32:39 by youmoumn         ###   ########.fr       */
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
	t_stack *b = NULL;
	if (ac == 1 || !av[1][0])
		exit (1);
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
			if ((str[j][k] == '-' || str[j][k] == '+' || str[j][k] == ' ') && k == 0)
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
	// long n = 8888888888888;
	// if (n > INT_MIN)
	// {
	// 	write(1, "Error\n", 6);
	// }
	if (!ft_isdouble(a))
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	if (is_b_sort(a))
	{
		// printf("BACKWORD \n");
		while(ft_lstsize(a))
		{
			pb(&a, &b);
			rrb(&b);
			// rotate_stack_b(&b, big_node(b));
		}
		while(ft_lstsize(b))
		{
			pa(&a, &b);
		}
		exit(1);
	}
	if(!is_sort(a) && !is_b_sort(a))
	{
		index_stack(a);
		t_stack *tmp = malloc(sizeof(t_stack));
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
			sortfour(&a, &tmp);
		}
		else if ((ft_lstsize(a)) == 5)
		{
			sortfive(&a, &tmp);
		}
		else
		{
			sort_all(&a, &b);
		}
	}
	t_stack *tmp1 = a;
	tmp1 = a;
	while(tmp1)
	{
		printf("%d ", tmp1->data);
		tmp1 = tmp1->next;
	}
	// t_stack *tmp2 = b;
	// while(tmp2)
	// {
	// 	printf("%d ", tmp2->data);
	// 	tmp2 = tmp2->next;
	// }
}