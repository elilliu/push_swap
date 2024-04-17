/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:17:48 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 15:00:20 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_small_stack(t_stack *stack, char list)
{
	int	i;

	i = 0;
	while (stack[i].last != 1)
		i++;
	if (i == 1)
	{
		if (stack[0].value > stack[1].value)
			swap(stack, list);
	}
	else if (i == 2)
		sort_stack_3(stack, list);
}

int	find_num_to_push(t_stack *stack_a)
{
	int	i;
	int	index;
	int	cost;

	i = 0;
	index = 0;
	cost = stack_a[0].cost;
	while (stack_a[i].last != 1)
	{
		if (stack_a[i].cost < cost)
		{
			cost = stack_a[i].cost;
			index = i;
		}
		i++;
	}
	if (stack_a[i].cost < cost)
	{
		cost = stack_a[i].cost;
		index = i;
	}
	return (index);
}

void	sort_big_stack(t_stack *stack_a, t_stack *stack_b)
{
	int	num_to_push;

	push(stack_a, stack_b, 'b');
	push(stack_a, stack_b, 'b');
	while (stack_a[2].last != 1)
	{
		get_cost(stack_a, stack_b);
		num_to_push = find_num_to_push(stack_a);
		push_to_b(stack_a, stack_b, num_to_push);
	}
	sort_stack_3(stack_a, 'a');
	push_to_a(stack_a, stack_b);
	fix_a(stack_a);
}

void	sort_stack(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	if (is_sorted(stack_a) == 1)
		return ;
	i = 0;
	while (stack_a[i].last != 1)
		i++;
	if (i <= 2)
		sort_small_stack(stack_a, 'a');
	else if (i == 3)
	{
		push(stack_a, stack_b, 'b');
		sort_stack_3(stack_a, 'a');
		push_to_a(stack_a, stack_b);
		fix_a(stack_a);
	}
	else
		sort_big_stack(stack_a, stack_b);
}
