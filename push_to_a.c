/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 17:12:52 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(t_stack *stack_a, t_stack *stack_b)
{
	int	value_a;
	int	value_b;
	int	i_a;

	while (stack_b[0].last != -1)
	{
		value_b = stack_b[0].value;
		i_a = index_stack_a(stack_a, value_b);
		value_a = stack_a[i_a].value;
		if (position_to_median(stack_a, i_a) == 0)
		{
			while (stack_a[0].value != value_a)
				rotate(stack_a, 'a');
		}
		else
		{
			while (stack_a[0].value != value_a)
				rrotate(stack_a, 'a');
		}
		push(stack_b, stack_a, 'a');
	}
}
