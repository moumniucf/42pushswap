/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:18:58 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/19 14:11:39 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char const *str)
{
	int				i;
	int				x;
	long			rst;

	i = 0;
	x = 1;
	rst = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			x = x * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		rst = rst * 10 + str[i] - 48;
		if ((size_t)rst > LLONG_MAX && x == -1)
			return (0);
		if ((size_t)rst > LLONG_MAX)
			return (-1);
		i++;
	}
	return (rst * x);
}

void	av_err(int ac, char **av, t_stack **a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < ac)
	{
		if (is_empty_or_spaces(av[j]) || !is_error_index(av[j]))
		{
			write(2, "Error\n", 6);
			free_stack(a);
			exit(1);
		}
		j++;
	}
	if ((av[i][0] == '-' || av[i][0] == '+') && av[i][1] == '\0')
	{
		write(2, "Error\n", 6);
		free_stack(a);
		exit(1);
	}
}

void	av_overflow(int ac, char **av, t_stack **a)
{
	long	n;
	int		i;

	if (ac == 1)
		exit(1);
	i = 0;
	n = ft_atol(av[i]);
	if (n < INT_MIN || n > INT_MAX || !av[i][0])
	{
		write(2, "Error\n", 6);
		free_stack(a);
		exit(1);
	}
}
