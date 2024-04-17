/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:28:08 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/28 07:27:24 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	swap_bonus(t_list_bonus *stack)
{
	int	tmp;

	tmp = stack[0].value;
	stack[0].value = stack[1].value;
	stack[1].value = tmp;
}

void	ss_bonus(t_list_bonus *stack_a, t_list_bonus *stack_b)
{
	swap_bonus(stack_a);
	swap_bonus(stack_b);
}
