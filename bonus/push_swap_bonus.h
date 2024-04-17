/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elilliu <elilliu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 21:13:37 by elilliu           #+#    #+#             */
/*   Updated: 2023/12/28 07:29:59 by elilliu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../libft/libft.h"
# include "../gnl/get_next_line.h"

typedef struct s_list_bonus
{
	int			value;
	int			last;
}				t_list_bonus;

t_list_bonus	*init_stack_b_bonus(int count);
void			push_bonus(t_list_bonus *source, t_list_bonus *dest);
void			rotate_bonus(t_list_bonus *stack);
void			rr_bonus(t_list_bonus *stack_a, t_list_bonus *stack_b);
void			rrr_bonus(t_list_bonus *stack_a, t_list_bonus *stack_b);
void			rrotate_bonus(t_list_bonus *stack);
void			shift_down_bonus(t_list_bonus *stack);
void			shift_up_bonus(t_list_bonus *stack);
void			swap_bonus(t_list_bonus *stack);
void			ss_bonus(t_list_bonus *stack_a, t_list_bonus *stack_b);
void			verif_stack_a(t_list_bonus *stack_a);
int				read_commands(t_list_bonus *stack_a, t_list_bonus *stack_b);
int				verif_args_bonus(char **str, int count);

#endif
