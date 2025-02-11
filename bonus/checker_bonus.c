/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:58:14 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/11 19:51:58 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	parss2checker(char *line, t_stack **a, t_stack **b)
{
	if (!ft_strncmp(line, "sa\n", 3))
		sa(a);
	else if (!ft_strncmp(line, "sb\n", 3))
		sb(b);
	else if (!ft_strncmp(line, "ss\n", 3))
		ss(a, b);
	else if (!ft_strncmp(line, "pa\n", 3))
		pa(a, b);
	else if (!ft_strncmp(line, "pb\n", 3))
		pb(a, b);
	else if (!ft_strncmp(line, "rra\n", 4))
		rra(a);
	else if (!ft_strncmp(line, "rrb\n", 4))
		rrb(b);
	else if (!ft_strncmp(line, "rrr\n", 4))
		rrr(a, b);
	else if (!ft_strncmp(line, "ra\n", 3))
		ra(a);
	else if (!ft_strncmp(line, "rb\n", 3))
		rb(b);
	else if (!ft_strncmp(line, "rr\n", 3))
		rr(a, b);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	*line;

	if (ac == 1)
		exit(1);
	a = NULL;
	b = NULL;
	ft_parss(ac, av, &a);
	back_satck(a, b);
	line = get_next_line(STDIN_FILENO);
	while (line)
	{
		parss2checker(line, &a, &b);
		get_next_line(STDIN_FILENO);
		line = get_next_line(STDIN_FILENO);
	}
	if (!is_sort(a))
	{
		write(1, "OK\n", 3);
	}
	else
		write(1, "KO\n", 3);
}
