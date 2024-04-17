/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fix_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 17:41:50 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_lowest(t_stack *stack_a)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
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

void	fix_a(t_stack *stack_a)
{
	int	index;
	int	value;

	index = index_lowest(stack_a);
	value = stack_a[index].value;
	if (position_to_median(stack_a, index) == 0)
	{
		while (stack_a[0].value != value)
			rotate(stack_a, 'a');
	}
	else
	{
		while (stack_a[0].value != value)
			rrotate(stack_a, 'a');
	}
}
