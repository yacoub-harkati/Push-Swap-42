/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:11:02 by yaharkat          #+#    #+#             */
/*   Updated: 2023/12/19 15:46:46 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_tree(t_stack_node **lst)
{
	t_stack_node *highest_node;

	highest_node = find_highest(*lst);
	if(*lst == highest_node)
		ra(lst, false);
	else if ((*lst)->next == highest_node)
		rra(lst, false);
	if ((*lst)->value > (*lst)->next->value)
		sa(lst, false);
}