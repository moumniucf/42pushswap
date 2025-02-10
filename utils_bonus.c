/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 14:00:47 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/10 15:02:40 by youmoumn         ###   ########.fr       */
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
int	ft_isdouble(t_stack *head)
{
	t_stack	*first;
	t_stack	*second;

	first = head;
	while (first)
	{
		second = (first)->next;
		while (second)
		{
			if (first->data == second->data)
			{
				return (0);
			}
			second = second->next;
		}
		first = first->next;
	}
	return (1);
}
void	free_stack(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*help;

	if (head == NULL)
		return ;
	help = *head;
	while (help)
	{
		tmp = (help)->next;
		free(help);
		help = tmp;
	}
	head = NULL;
}

void	free_stacks(t_stack **a, t_stack **b)
{
	free_stack(a);
	free_stack(b);
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
int	ft_lstsize(t_stack *lst)
{
	int		ans;
	t_stack	*temp;

	ans = 0;
	temp = lst;
	while (temp)
	{
		ans++;
		temp = temp->next;
	}
	return (ans);
}
int	is_b_sort(t_stack *head)
{
	if (!head)
		return (0);
	if (ft_lstsize(head) == 1)
	{
		free_stack(&head);
		exit(1);
	}
	while (head->next)
	{
		if ((head->data) < ((head->next->data)))
			return (0);
		head = head->next;
	}
	return (1);
}

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

