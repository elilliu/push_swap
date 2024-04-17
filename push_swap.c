/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:15:00 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:30:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*init_stack_args(int ac, char **av, int *count)
{
	int		i;
	t_stack	*stack;

	i = 1;
	if (verif_args(&av[1], (ac - 1)) == 0)
		return (0);
	stack = malloc(sizeof(t_stack) * ac - 1);
	if (!stack)
		return (0);
	while (i < ac)
	{
		stack[i - 1].value = ft_atoi(av[i]);
		stack[i - 1].last = 0;
		stack[i - 1].cost = 0;
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

static void	stack_fill(t_stack *stack, char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		stack[i].value = ft_atoi(args[i]);
		stack[i].last = 0;
		stack[i].cost = 0;
		i++;
	}
	stack[i - 1].last = 1;
}

static t_stack	*init_stack_str(char **av, int *count)
{
	int		i;
	char	**args;
	t_stack	*stack;

	i = 0;
	args = ft_split(av[1], ' ');
	if (!args)
		return (0);
	while (args[i])
		i++;
	*count = i;
	if (verif_args(args, *count) == 0)
		return (0);
	stack = malloc(sizeof(t_stack) * (i + 1));
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
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		count;

	if (ac <= 1)
		return (1);
	count = 0;
	if (ac == 2)
		stack_a = init_stack_str(av, &count);
	else
		stack_a = init_stack_args(ac, av, &count);
	if (!stack_a)
		return (write(1, "Error\n", 6), 1);
	stack_b = init_stack_b(count);
	if (!stack_b)
		return (free (stack_a), write(1, "Error\n", 6), 1);
	sort_stack(stack_a, stack_b);
	free(stack_a);
	free(stack_b);
	return (0);
}
