/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:58:14 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/10 14:55:35 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "checker_bonus.h"

int main(int ac, char **av)
{
	// char *len;
	// len = get_next_line(STDIN_FILENO);
	// while(len)
	// {
	// 	len = get_next_line(STDIN_FILENO);
	// }
	// if (len == av[i])
	// {
	// 	printf("isfhiov\n");
	// }
	// if (!ft_isdigit(len[i]))
	// {
	// 	printf("Error\n");
	// }
	
	int i = 1;
	while(i < ac)
	{
		ft_parss(ac, av);
	}
}