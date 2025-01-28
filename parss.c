/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 10:01:25 by youmoumn          #+#    #+#             */
/*   Updated: 2025/01/28 12:10:58 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.h"
// int main(int ac, char **av)
// {
// 	int i = 1;
// 	while(i < ac)
// 	{
// 		int value = ft_atoi(av[i]);
// 		t_stack *a = new_node(value);
// 		t_stack *b = malloc(sizeof(t_stack));
// 		t_stack *head = a;
// 		printf("==>%d\n", ft_lstsize(a));
// 		if (ft_lstsize(a) == 3)
// 		{
// 			sortthree(&head);
// 		}
// 		while(head)
// 		{
// 			printf("%d\n", head->data);
// 			head = head->next;
// 		}
// 		char **str = ft_split(av[i], ' ');
// 		int j = 0;
// 		int k = 0;
// 		if ((av[i][0] == '-' || av[i][0] == '+') && av[i][1] == '\0')
// 		{
// 			write(1, "Error\n", 6);
// 			exit(0);
// 		}
// 		while(str[j])
// 		{
// 			k = 0;
// 			if ((str[j][k] == '-' || str[j][k] == '+') && k == 0)
// 				k++;
// 			while(str[j][k])
// 			{
// 				if (!ft_isdigit(str[j][k]))
// 				{
// 					write(1, "Error\n", 6);
// 					exit(0);
// 				}
// 				k++;
// 			}
// 			j++;
// 		}
// 		i++;
// 	}
// }
