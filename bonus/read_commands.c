/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_commands.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:34:52 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/30 12:42:55 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	execute_command(t_list_bonus *stack_a,
		t_list_bonus *stack_b, char *command)
{
	if (ft_strncmp(command, "sa\n", 3) == 0)
		swap_bonus(stack_a);
	else if (ft_strncmp(command, "sb\n", 3) == 0)
		swap_bonus(stack_b);
	else if (ft_strncmp(command, "ss\n", 3) == 0)
		ss_bonus(stack_a, stack_b);
	else if (ft_strncmp(command, "pa\n", 3) == 0)
		push_bonus(stack_b, stack_a);
	else if (ft_strncmp(command, "pb\n", 3) == 0)
		push_bonus(stack_a, stack_b);
	else if (ft_strncmp(command, "ra\n", 3) == 0)
		rotate_bonus(stack_a);
	else if (ft_strncmp(command, "rb\n", 3) == 0)
		rotate_bonus(stack_b);
	else if (ft_strncmp(command, "rr\n", 4) == 0)
		rr_bonus(stack_a, stack_b);
	else if (ft_strncmp(command, "rra\n", 4) == 0)
		rrotate_bonus(stack_a);
	else if (ft_strncmp(command, "rrb\n", 4) == 0)
		rrotate_bonus(stack_b);
	else if (ft_strncmp(command, "rrr\n", 4) == 0)
		rrr_bonus(stack_a, stack_b);
	else
		return (0);
	return (1);
}

int	read_commands(t_list_bonus *stack_a, t_list_bonus *stack_b)
{
	char	*command;

	while (1)
	{
		command = get_next_line(0);
		if (command == 0)
			return (0);
		if (execute_command(stack_a, stack_b, command) == 0)
			return (-1);
		free(command);
	}
	return (1);
}
