/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cost.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:19:35 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	calculate_cost(t_stack *stack, int index)
{
	int	cost;
	int	size;

	size = 0;
	while (stack[size].last != 1)
		size++;
	size++;
	if (position_to_median(stack, index) == 0
		|| position_to_median(stack, index) == -1)
		cost = index;
	else
		cost = size - index;
	return (cost);
}

int	calculate_cost_opti(t_stack *stack_a, t_stack *stack_b, int i_a, int i_b)
{
	int	cost_a;
	int	cost_b;

	cost_a = calculate_cost(stack_a, i_a);
	cost_b = calculate_cost(stack_b, i_b);
	if (cost_a >= cost_b)
		return (cost_a);
	else
		return (cost_b);
}

void	get_cost(t_stack *stack_a, t_stack *stack_b)
{
	int	i_a;
	int	i_b;

	i_a = 0;
	while (stack_a[i_a].last != 1)
	{
		i_b = index_stack_b(stack_b, stack_a[i_a].value);
		if (is_opti(stack_a, stack_b, i_a) == 0)
			stack_a[i_a].cost = calculate_cost(stack_a, i_a)
				+ calculate_cost(stack_b, i_b);
		else
			stack_a[i_a].cost = calculate_cost_opti(stack_a, stack_b, i_a, i_b);
		i_a++;
	}
	i_b = index_stack_b(stack_b, stack_a[i_a].value);
	if (is_opti(stack_a, stack_b, i_a) == 0)
		stack_a[i_a].cost = calculate_cost(stack_a, i_a)
			+ calculate_cost(stack_b, i_b);
	else
		stack_a[i_a].cost = calculate_cost_opti(stack_a, stack_b, i_a, i_b);
}
