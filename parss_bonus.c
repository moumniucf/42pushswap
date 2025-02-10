/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parss_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 13:59:16 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/10 14:57:29 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
void	ft_parss(int ac, char **av)
{
	char	**str;
	int		i;

	av_err(av);
	i = 1;
	while (i < ac)
	{
		av_overflow(ac, &av[i]);
		str = ft_split(av[i], ' ');
		splt_err(str);
		i++;
		freefun(str);
	}
}