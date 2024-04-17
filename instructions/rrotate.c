/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:34:05 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	shift_down_rr(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack[i].last != 1)
		i++;
	while (i)
	{
		stack[i].value = stack[i - 1].value;
		i--;
	}
}

void	rrotate(t_stack *stack, char list)
{
	int	tmp;
	int	i;

	i = 0;
	while (stack[i].last != 1)
		i++;
	tmp = stack[i].value;
	shift_down_rr(stack);
	stack[0].value = tmp;
	if (list == 'a')
		write(1, "rra\n", 4);
	else if (list == 'b')
		write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rrotate(stack_a, 'c');
	rrotate(stack_b, 'c');
	write(1, "rrr\n", 4);
}
