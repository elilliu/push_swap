/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:28:53 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:59:46 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	int	i;

	i = 1;
	while (stack[i].last != 1)
	{
		if (stack[i].value < stack[i - 1].value)
			return (0);
		i++;
	}
	if (stack[i].value < stack[i - 1].value)
		return (0);
	return (1);
}
