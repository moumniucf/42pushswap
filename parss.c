/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:01:25 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/27 19:13:11 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	int i = 1;
	while(i < ac)
	{
		char **str = ft_split(av[i], ' ');
		int j = 0;
		int k = 0;
		while(str[j])
		{
			if ((str[j][k] == '-' || str[j][k] == '+') && k == 0)
				k++;
			while(str[j][k])
			{
				if (!ft_isdigit(str[j][k]) || str[j][0] == '-' && str[j][1] == '\0')
				{
					write(1, "ERROR\n", 6);
					exit(0);
				}
				k++;
			}
			// printf("%s\n", str[j]);
			j++;
		}
		i++;
	}
}
