/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:13:05 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lowest_num(t_stack *stack_b, int value)
{
	int	i;

	i = 0;
	while (stack_b[i].last != 1)
	{
		if (stack_b[i].value < value)
			return (0);
		i++;
	}
	if (stack_b[i].value < value)
		return (0);
	return (1);
}

int	index_stack_b_lowest(t_stack *stack_b)
{
	int	index;
	int	i;

	index = 0;
	i = 0;
	while (stack_b[i].last != 1)
	{
		if (stack_b[i].value > stack_b[index].value)
			index = i;
		i++;
	}
	if (stack_b[i].value > stack_b[index].value)
		index = i;
	return (index);
}

int	index_stack_b(t_stack *stack_b, int value)
{
	int	index;
	int	i;

	if (lowest_num(stack_b, value) == 1)
		return (index_stack_b_lowest(stack_b));
	index = 0;
	i = 0;
	while (stack_b[i].last != 1)
	{
		if (stack_b[i].value < value && stack_b[index].value > value)
			index = i;
		if (stack_b[i].value < value && stack_b[i].value > stack_b[index].value)
			index = i;
		i++;
	}
	if (stack_b[i].value < value && stack_b[index].value > value)
			index = i;
	if (stack_b[i].value < value && stack_b[i].value > stack_b[index].value)
			index = i;
	return (index);
}
