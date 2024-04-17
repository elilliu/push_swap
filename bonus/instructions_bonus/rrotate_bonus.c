/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:24:40 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/27 21:30:32 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	shift_down_rr_bonus(t_list_bonus *stack)
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

void	rrotate_bonus(t_list_bonus *stack)
{
	int	tmp;
	int	i;

	i = 0;
	while (stack[i].last != 1)
		i++;
	tmp = stack[i].value;
	shift_down_rr_bonus(stack);
	stack[0].value = tmp;
}

void	rrr_bonus(t_list_bonus *stack_a, t_list_bonus *stack_b)
{
	rrotate_bonus(stack_a);
	rrotate_bonus(stack_b);
}
