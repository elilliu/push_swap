/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:20:38 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/27 21:30:09 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	rotate_bonus(t_list_bonus *stack)
{
	int	tmp;
	int	i;

	tmp = stack[0].value;
	shift_up_bonus(stack);
	i = 0;
	while (stack[i].last != 1)
		i++;
	stack[i].last = 0;
	stack[i + 1].last = 1;
	stack[i + 1].value = tmp;
}

void	rr_bonus(t_list_bonus *stack_a, t_list_bonus *stack_b)
{
	rotate_bonus(stack_a);
	rotate_bonus(stack_b);
}
