/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 11:53:30 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/18 18:40:05 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		exit(0);
	b = NULL;
	a = NULL;
	ft_parss(ac, av, &a);
	back_satck(a, b);
	if (!is_sort(a))
	{
		index_stack(a);
		if ((ft_lstsize(a)) == 2)
			sa(&a);
		else if ((ft_lstsize(a)) == 3)
			sortthree(&a);
		else if ((ft_lstsize(a)) == 4)
			sortfour(&a, &b);
		else if ((ft_lstsize(a)) == 5)
			sortfive(&a, &b);
		else
			sort_all(&a, &b);
	}
	free_stacks(&a, &b);
}
