/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_down.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:11:03 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	shift_down(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack[i].last != 1 && stack[i].last != -1)
		i++;
	if (i == 0 && stack[i].last == -1)
		stack[i].last = 1;
	else
	{
		stack[i].last = 0;
		stack[i + 1].last = 1;
	}
	while (i + 1)
	{
		stack[i + 1].value = stack[i].value;
		i--;
	}
}
