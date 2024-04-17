/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_up.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:10:00 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	shift_up(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack[i].last != 1)
	{
		stack[i].value = stack[i + 1].value;
		i++;
	}
	stack[i].last = -1;
	if (i > 0)
		stack[i - 1].last = 1;
}
