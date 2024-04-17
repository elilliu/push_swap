/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:10:29 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack *stack, char list)
{
	int	tmp;

	tmp = stack[0].value;
	stack[0].value = stack[1].value;
	stack[1].value = tmp;
	if (list == 'a')
		write(1, "sa\n", 3);
	else if (list == 'b')
		write(1, "sb\n", 3);
	else if (list == 'c')
		write(1, "ss\n", 3);
}
