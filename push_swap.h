/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:15:21 by elilliu           #+#    #+#             */
/*   Updated: 2024/01/16 14:55:58 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int			value;
	int			last;
	int			cost;
}				t_stack;

int		main(int ac, char **av);
int		verif_args(char **str, int count);
t_stack	*init_stack_b(int count);
void	shift_down(t_stack *stack);
void	shift_up(t_stack *stack);
void	push(t_stack *source, t_stack *dest, char list);
void	swap(t_stack *stack, char list);
void	rotate(t_stack *stack, char list);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rrotate(t_stack *stack, char list);
void	rrr(t_stack *stack_a, t_stack *stack_b);
int		is_sorted(t_stack *stack);
void	sort_stack(t_stack *stack_a, t_stack *stack_b);
void	sort_stack_3(t_stack *stack, char list);
void	get_cost(t_stack *stack_a, t_stack *stack_b);
int		index_stack_b(t_stack *stack_b, int value);
int		index_stack_a(t_stack *stack_a, int value);
void	push_to_b(t_stack *stack_a, t_stack *stack_b, int i_a);
void	push_to_a(t_stack *stack_a, t_stack *stack_b);
int		position_to_median(t_stack *stack, int index);
int		is_opti(t_stack *stack_a, t_stack *stack_b, int i_a);
void	fix_a(t_stack *stack_a);
t_stack	*init_stack_b_bonus(int count);

#endif
