/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:01:25 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/25 13:15:05 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int ac, char **av)
{
	int i = 1;
	while(i < ac)
	{
		char **str = ft_split(av[i], ' ');
		int j = 0;
		int k = 0;
		while(str[j])
		{
			k = 0;
			while(str[j][k] == '+')
			{
				k++;
			}
			if (str[j][k] == '-' && k == 0)
				k++;
			while(str[j][k])
			{
				if (!ft_isdigit(str[j][k]))
				{
					printf("ERROR in [%c]\n",str[j][k] );
					exit(1);
				}
				k++;
			}
			printf("%s\n", str[j]);
			j++;
		}
		i++;
	}
}
