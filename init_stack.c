/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 13:48:34 by yaharkat          #+#    #+#             */
/*   Updated: 2023/12/17 15:42:03 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void init_stack(t_stack_node **a, char **av, bool av_flag)
{
	int i;
	
	i = !av_flag;
	while (av[i])
	{
		if (!check_error(av[i]) || !check_duplicate(*a, ft_atoi(av[i])))
		{
			if (av_flag)
				free_matrix(av);
			free_stack(a); // to do: free stack
		}
		add_back_stack(a, new_stack(ft_atol(av[i])));
		i++;
	}
}
