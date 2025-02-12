/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:00:47 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/12 12:13:51 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

long	ft_atol(const char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result * sign > INT_MAX || result * sign < INT_MIN)
			return ((long)INT_MAX + 1);
		i++;
	}
	return (result * sign);
}

void	av_overflow(int ac, char **av)
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
		exit(1);
	}
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

void	splt_err2(char **str)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (str[j][k] == ' ')
		k++;
	if ((str[j][k] == '-' || str[j][k] == '+') && str[j][k + 1] == '\0')
	{
		write(2, "Error\n", 6);
		freefun(str);
		exit(1);
	}
}

void	splt_err(char **str)
{
	int	j;
	int	k;

	j = 0;
	while (str[j])
	{
		k = 0;
		while (str[j][k] == ' ')
			k++;
		splt_err2(str);
		if (str[j][k] == '-' || str[j][k] == '+')
			k++;
		while (str[j][k])
		{
			if (!ft_isdigit(str[j][k]))
			{
				write(2, "Error\n", 6);
				freefun(str);
				exit(1);
			}
			k++;
		}
		j++;
	}
}
