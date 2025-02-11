/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parss_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:59:16 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/11 18:27:25 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_parss(int ac, char **av, t_stack **a)
{
	char	**str;
	int		i;
	int		j;
	t_stack	*new;
	if (!ft_isdouble(*a))
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	av_err(av);
	i = 1;
	while (i < ac)
	{
		av_overflow(ac, &av[i]);
		str = ft_split(av[i], ' ');
		splt_err(str);
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