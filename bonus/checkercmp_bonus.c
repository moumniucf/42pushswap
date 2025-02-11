/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkercmp_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:48:35 by youmoumn          #+#    #+#             */
/*   Updated: 2025/02/11 17:52:07 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;
	while(i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}