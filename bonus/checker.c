/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 16:37:57 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/30 12:37:42 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static t_list_bonus	*init_stack_args(int ac, char **av, int *count)
{
	int				i;
	t_list_bonus	*stack;

	i = 1;
	if (verif_args_bonus(&av[1], (ac - 1)) == 0)
		return (0);
	stack = malloc(sizeof(t_list_bonus) * ac - 1);
	if (!stack)
		return (0);
	while (i < ac)
	{
		stack[i - 1].value = ft_atoi(av[i]);
		stack[i - 1].last = 0;
		i++;
	}
	*count = i - 1;
	stack[i - 2].last = 1;
	return (stack);
}

static void	free_args(char **tab, int row)
{
	while (row >= 0)
		free (tab[row--]);
	free (tab);
}

static void	stack_fill(t_list_bonus *stack, char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		stack[i].value = ft_atoi(args[i]);
		stack[i].last = 0;
		i++;
	}
	stack[i - 1].last = 1;
}

static t_list_bonus	*init_stack_str(char **av, int *count)
{
	int				i;
	char			**args;
	t_list_bonus	*stack;

	i = 0;
	args = ft_split(av[1], ' ');
	if (!args)
		return (0);
	while (args[i])
		i++;
	*count = i;
	if (verif_args_bonus(args, *count) == 0)
		return (0);
	stack = malloc(sizeof(t_list_bonus) * (i + 1));
	if (!stack)
	{
		free_args(args, *count);
		return (0);
	}
	stack_fill(stack, args);
	free_args (args, *count);
	return (stack);
}

int	main(int ac, char **av)
{
	t_list_bonus	*stack_a;
	t_list_bonus	*stack_b;
	int				count;

	if (ac <= 1)
		return (1);
	count = 0;
	if (ac == 2)
		stack_a = init_stack_str(av, &count);
	else
		stack_a = init_stack_args(ac, av, &count);
	if (!stack_a)
		return (write(1, "Error\n", 6), 1);
	stack_b = init_stack_b_bonus(count);
	if (!stack_b)
		return (free (stack_a), write(1, "Error\n", 6), 1);
	if (read_commands(stack_a, stack_b) == -1)
		return (write(1, "Error\n", 6), 1);
	verif_stack_a(stack_a);
	free(stack_a);
	free(stack_b);
	return (0);
}
