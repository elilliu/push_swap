/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shift_down_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:26:33 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/27 21:29:24 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	shift_down_bonus(t_list_bonus *stack)
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
