/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:25:31 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack *stack, char list)
{
	int	tmp;
	int	i;

	tmp = stack[0].value;
	shift_up(stack);
	i = 0;
	while (stack[i].last != 1)
		i++;
	stack[i].last = 0;
	stack[i + 1].last = 1;
	stack[i + 1].value = tmp;
	if (list == 'a')
		write(1, "ra\n", 3);
	else if (list == 'b')
		write(1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a, 'c');
	rotate(stack_b, 'c');
	write (1, "rr\n", 3);
}
