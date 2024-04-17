/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_stack_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:57:07 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/28 03:19:41 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	verif_stack_a(t_list_bonus *stack_a)
{
	int	i;

	i = 0;
	while (stack_a[i].last != 1)
	{
		if (stack_a[i + 1].value < stack_a[i].value)
		{
			write(1, "KO\n", 3);
			return ;
		}
		i++;
	}
	write(1, "OK\n", 3);
}
