/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 21:35:19 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*init_stack_b(int count)
{
	int		i;
	t_stack	*stack_b;

	i = 0;
	stack_b = malloc(sizeof(t_stack) * (count + 1));
	if (!stack_b)
		return (0);
	while (i < count)
	{
		stack_b[i].value = 0;
		stack_b[i].last = -1;
		stack_b[i].cost = 0;
		i++;
	}
	return (stack_b);
}
