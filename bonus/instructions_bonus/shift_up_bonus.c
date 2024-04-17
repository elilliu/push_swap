/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_up_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:27:20 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/27 21:29:20 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	shift_up_bonus(t_list_bonus *stack)
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
