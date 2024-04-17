/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:18:30 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack_3(t_stack *stack, char list)
{
	if (stack[0].value > stack[1].value)
		swap(stack, list);
	if (stack[0].value > stack[2].value)
		rrotate(stack, list);
	if (stack[1].value > stack[2].value)
	{
		rrotate(stack, list);
		swap(stack, list);
	}
}
