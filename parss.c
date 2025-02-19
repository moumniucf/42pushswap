/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:01:25 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/19 12:03:33 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_parss(int ac, char **av, t_stack **a)
{
	char	**str;
	int		i;
	int		j;
	t_stack	*new;

	av_err(av, a);
	i = 1;
	while (i < ac)
	{
		av_overflow(ac, &av[i], a);
		str = ft_split(av[i], ' ');
		splt_err(str, a);
		j = 0;
		while (str[j])
		{
			new = new_node(ft_atoi(str[j]));
			ft_lstadd_back(a, new);
			j++;
		}
		i++;
		freefun(str);
	}
}
