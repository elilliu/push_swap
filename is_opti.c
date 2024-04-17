/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_opti.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:20:14 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_opti(t_stack *stack_a, t_stack *stack_b, int i_a)
{
	int	i_b;

	i_b = index_stack_b(stack_b, stack_a[i_a].value);
	if (position_to_median(stack_a, i_a)
		+ position_to_median(stack_b, i_b) == 1)
		return (0);
	else
		return (1);
}
