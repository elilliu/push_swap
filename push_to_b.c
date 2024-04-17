/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:10:38 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/21 16:53:48 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b_rrotate(t_stack *stack_a, t_stack *stack_b, int i_a)
{
	int	value_a;
	int	value_b;
	int	i_b;

	value_a = stack_a[i_a].value;
	i_b = index_stack_b(stack_b, value_a);
	value_b = stack_b[i_b].value;
	while (stack_a[0].value != value_a && stack_b[0].value != value_b)
		rrr(stack_a, stack_b);
	while (stack_a[0].value != value_a)
		rrotate(stack_a, 'a');
	while (stack_b[0].value != value_b)
		rrotate(stack_b, 'b');
	push(stack_a, stack_b, 'b');
}

void	push_to_b_rotate(t_stack *stack_a, t_stack *stack_b, int i_a)
{
	int	value_a;
	int	value_b;
	int	i_b;

	value_a = stack_a[i_a].value;
	i_b = index_stack_b(stack_b, value_a);
	value_b = stack_b[i_b].value;
	while (stack_a[0].value != value_a && stack_b[0].value != value_b)
		rr(stack_a, stack_b);
	while (stack_a[0].value != value_a)
		rotate(stack_a, 'a');
	while (stack_b[0].value != value_b)
		rotate(stack_b, 'b');
	push(stack_a, stack_b, 'b');
}

void	push_to_b_opti(t_stack *stack_a, t_stack *stack_b, int i_a)
{
	if (position_to_median(stack_a, i_a) == 0)
	{
		push_to_b_rotate(stack_a, stack_b, i_a);
		return ;
	}
	else
	{
		push_to_b_rrotate(stack_a, stack_b, i_a);
		return ;
	}
}

void	push_to_b(t_stack *stack_a, t_stack *stack_b, int i_a)
{
	int	value_a;
	int	value_b;

	if (is_opti(stack_a, stack_b, i_a) == 1)
	{
		push_to_b_opti(stack_a, stack_b, i_a);
		return ;
	}
	value_a = stack_a[i_a].value;
	value_b = stack_b[index_stack_b(stack_b, value_a)].value;
	if (position_to_median(stack_a, i_a) == 0)
	{
		while (stack_a[0].value != value_a)
			rotate(stack_a, 'a');
		while (stack_b[0].value != value_b)
			rrotate(stack_b, 'b');
	}
	else
	{
		while (stack_a[0].value != value_a)
			rrotate(stack_a, 'a');
		while (stack_b[0].value != value_b)
			rotate(stack_b, 'b');
	}
	push(stack_a, stack_b, 'b');
}
