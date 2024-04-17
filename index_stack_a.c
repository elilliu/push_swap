/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:39:10 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	highest_num(t_stack *stack_a, int value)
{
	int	i;

	i = 0;
	while (stack_a[i].last != 1)
	{
		if (stack_a[i].value > value)
			return (0);
		i++;
	}
	if (stack_a[i].value > value)
		return (0);
	return (1);
}

int	index_stack_b_highest(t_stack *stack_a)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (stack_a[i].last != 1)
	{
		if (stack_a[i].value < stack_a[index].value)
			index = i;
		i++;
	}
	if (stack_a[i].value < stack_a[index].value)
		index = i;
	return (index);
}

int	index_stack_a(t_stack *stack_a, int value)
{
	int	index;
	int	i;

	if (highest_num(stack_a, value) == 1)
		return (index_stack_b_highest(stack_a));
	index = 0;
	i = 0;
	while (stack_a[i].last != 1)
	{
		if (stack_a[i].value > value && stack_a[index].value < value)
			index = i;
		if (stack_a[i].value > value && stack_a[i].value < stack_a[index].value)
			index = i;
		i++;
	}
	if (stack_a[i].value > value && stack_a[index].value < value)
			index = i;
	if (stack_a[i].value > value && stack_a[i].value < stack_a[index].value)
			index = i;
		i++;
	return (index);
}
