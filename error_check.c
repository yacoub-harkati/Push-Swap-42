/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:28:16 by yaharkat          #+#    #+#             */
/*   Updated: 2023/12/17 15:28:53 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool check_error(char *av)
{
	if (!check_digit(av) || !check_int(av))
	 return false;
	return true;
}

bool check_digit(char *av)
{
	int i;

	i = 0;
	if (av[0] == '-' || av[0] == '+')
		i++;
	while (av[i])
	{
		if (!ft_isdigit(av[i]))
			return false;
		i++;
	}
	return true;
}
bool check_int(char *av)
{
	long number;

	number = ft_atol(av);
	if (number > INT_MAX || number < INT_MIN)
		return false;
	return true;
}

bool check_duplicate(t_stack_node *a, int number)
{
	t_stack_node *tmp;

	tmp = a;
	while (tmp)
	{
		if (tmp->value == number)
			return false;
		tmp = tmp->next;
	}
	return true;
}
