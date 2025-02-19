/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:17:46 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/19 13:26:58 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	is_empty_or_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
			return (0);
		i++;
	}
	return (1);
}

int	is_error_index(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] == '\0')
			return (0);
	}
	return (1);
}

void	av_err(int ac, char **av, t_stack **a)
{
	int	i;
	int	j;

	j = 1;
	i = 0;
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
