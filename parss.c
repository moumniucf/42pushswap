/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:01:25 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/07 13:04:17 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void	ft_parss(int ac, char **av)
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
		exit(1);
	}
	while (i < ac)
	{
		long n = ft_atol(av[i]);
		if (n < INT_MIN || n > INT_MAX)
		{
			write(1, "Error\n", 6);
			exit(1);
		}
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
}