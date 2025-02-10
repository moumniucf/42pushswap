/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:58:14 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/09 15:44:44 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "checker_bonus.h"

int main(int ac, char **av)
{
	char *len;
	int i = 1;
	len = get_next_line(STDIN_FILENO);
	while(len)
	{
		len = get_next_line(STDIN_FILENO);
	}
	if (len == av[i])
	{
		printf("isfhiov\n");
	}
	if (!ft_isdigit(len[i]))
	{
		printf("Error\n");
	}
	
	while(i < ac)
	{
		if ((av[i][0] == '-' || av[i][0] == '+') && av[i][1] == '\0')
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		char **str = ft_split(av[i], ' ');
		int j = 0;
		while(str[j])
		{
			int k = 0;
			if (str[j][k] == '-' || str[j][k] == '+')
				k++;
			while(str[j][k])
			{
				if (!ft_isdigit(str[j][k]))
				{
					write(2, "Error\n", 6);
					exit(1);
				}
				k++;
			}
			// printf("%s\n", str[j]);
			j++;
		}
		i++;
	}
}