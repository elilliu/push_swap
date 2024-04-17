/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack_b_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 20:58:21 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/27 21:22:18 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

t_list_bonus	*init_stack_b_bonus(int count)
{
	int				i;
	t_list_bonus	*stack_b;

	i = 0;
	stack_b = malloc(sizeof(t_list_bonus) * (count + 1));
	if (!stack_b)
		return (0);
	while (i < count)
	{
		stack_b[i].value = 0;
		stack_b[i].last = -1;
		i++;
	}
	return (stack_b);
}
