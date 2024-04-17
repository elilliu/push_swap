/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_to_median.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:22:03 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	position_to_median(t_stack *stack, int index)
{
	int	size;
	int	median;

	size = 0;
	while (stack[size].last != 1)
		size++;
	size++;
	if (size <= 2)
		return (-1);
	median = size / 2;
	if (index < median)
		return (0);
	else if (index > median)
		return (1);
	else
	{
		if (size % 2 == 1)
			return (0);
		else
			return (1);
	}
}
