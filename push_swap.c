/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:53:30 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/06 18:34:19 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	leaks()
{
	system("leaks push_swap");
}
int	main(int ac, char **av)
{
	// atexit(leaks);
	char	**str;
	t_stack	*a;
	t_stack	*b;
	int		i;
	int		j;
	int		k;
	t_stack	*new;

	b = NULL;
	a = NULL;
	if (ac == 1 || !av[1][0])
		exit (1);
	i = 1;
	if (is_empty_or_spaces(av[1]) || !is_error_index(av[1]))
	{
		write(1, "Error\n", 6);
		exit(0);
	}
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		k = 0;
		if ((av[i][0] == '-' || av[i][0] == '+') && av[i][1] == '\0')
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		while (str[j])
		{
			k = 0;
			if ((str[j][k] == '-' || str[j][k] == '+' || str[j][k] == ' '))
				k++;
			while (str[j][k])
			{
				if (!ft_isdigit(str[j][k]))
				{
					write(1, "Error\n", 6);
					exit(1);
				}
				k++;
			}
			new = new_node(ft_atoi(str[j]));
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
	if (is_b_sort(a) && ft_lstsize(a) > 5)
	{
		while (ft_lstsize(a))
		{
			pb(&a, &b);
		}
		while (ft_lstsize(b))
		{
			rrb(&b);
			pa(&a, &b);
		}
	}
	if (!is_sort(a))
	{
		index_stack(a);
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
		else
		{
			sort_all(&a, &b);
		}
	}
	free_stacks(&a, &b);
}
