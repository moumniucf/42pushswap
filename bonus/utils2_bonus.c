/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:17:46 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/18 18:43:24 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	av_err(char **av)
{
	int	i;

	i = 0;
	if (is_empty_or_spaces(av[1]) || !is_error_index(av[1]))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if ((av[i][0] == '-' || av[i][0] == '+') && av[i][1] == '\0')
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

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
